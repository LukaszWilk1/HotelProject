#include <exception>
#include <fstream>
#include <string>
#include "fmt/core.h"
using namespace std;

#include "ZarzadzanieRezerwacjami.h"
#include "ZarzadzaniePokojami.h"
#include "Rezerwacja.h"
#include "Klient.h"
#include "Termin.h"
#include "Utils.h"

void hotel_klasowy::ZarzadzanieRezerwacjami::odczytajRezerwacje() {
	rezerwacje.clear();

	ifstream myfile;
	myfile.open(DATA_FOLDER("rezerwacje.hotel"));
	if (myfile.is_open()) {
		string line;
		getline(myfile, line);
		nastepneId = std::stoi(line);
		while (getline(myfile, line))
		{
			auto sp = Utils::split(line, ";");
			Rezerwacja r(std::stoi(sp[0]), std::stoi(sp[1]), std::stoi(sp[2]), sp[3], std::stoi(sp[5]), std::stoi(sp[4]), std::stoi(sp[6]));
			rezerwacje.push_back(r);
		}
		myfile.close();
	}
	else {
		throw "Unable to open rezerwacje.hotel file";
	}
}

hotel_klasowy::Rezerwacja& hotel_klasowy::ZarzadzanieRezerwacjami::znajdzRezerwacje(int id)
{
	for (auto& rez : rezerwacje) {
		if (rez.getId() == id) return rez;
	}
	
	return Rezerwacja();
}

hotel_klasowy::ZarzadzanieRezerwacjami::ZarzadzanieRezerwacjami(ZarzadzaniePokojami* zp): zarzadzaniePokojami(zp) {
	odczytajRezerwacje();
}

/**
* Dodaje rezerwacje
* @returns id dodanej rezerwacji, -1 jezeli nie udalo sie dodac rezerwacji w danym terminie
**/
int hotel_klasowy::ZarzadzanieRezerwacjami::dodajRezerwacje(hotel_klasowy::Klient osoba, hotel_klasowy::Termin termin, int typPokoju) {
	int nrPokoju = zarzadzaniePokojami->znajdzWolnyPokoj(typPokoju, termin);
	if (nrPokoju != -1) {
		Rezerwacja r(nastepneId++, nrPokoju, osoba.id, termin);
		rezerwacje.push_back(r);
		zapiszRezerwacje();
		return r.getId();
	}

	return -1;
}

/**
* Anuluje rezerwacje i ustawia pokój na do posprzatania jezeli jest to wymagane
* @returns true - jezeli anulowano rezerwacje, false - jezeli podano niepoprawne id rezerwacji
**/
bool hotel_klasowy::ZarzadzanieRezerwacjami::anulujRezerwacje(int idRezerwacji) {
	auto& rez = znajdzRezerwacje(idRezerwacji);
	if (rez.getId() == -1) return false;

	if (!rez.archiwalna) {
		if (rez.zakwaterowana) {
			//ustaw pokoj do posprzatania
			zarzadzaniePokojami->getPokoj(rez.nrPokoju).do_sprzatania = true;
		}
		rez.archiwalna = true;
		zapiszRezerwacje();
	}
	
	return true;
}

/**
* Zmienia termin rezerwacji jezezeli jest to mozliwe
* Rezerwacja musi istniec oraz nie mogla byc juz zakwaterowana ani archiwalna
* @returns true jezeli zmieniono termin, false jezeli nie
**/
bool hotel_klasowy::ZarzadzanieRezerwacjami::zmienTerminRezerwacji(int idRezerwacji, Termin nowy) {
	auto& rez = znajdzRezerwacje(idRezerwacji);
	if (rez.getId() != -1 && !rez.archiwalna && !rez.zakwaterowana) {
		auto& orgPokoj = zarzadzaniePokojami->getPokoj(rez.nrPokoju);
		int nowyNrPokoju = zarzadzaniePokojami->znajdzWolnyPokoj(orgPokoj.typ_pokoju, nowy);
		if (nowyNrPokoju != -1) {
			rez.terminPobytu = nowy;
			rez.nrPokoju = nowyNrPokoju;
			zapiszRezerwacje();
			return true;
		}
	}
	
	return false;
}

bool hotel_klasowy::ZarzadzanieRezerwacjami::zakwateruj(int idRezerwacji) {
	auto& rez = znajdzRezerwacje(idRezerwacji);
	if (rez.getId() != -1 && !rez.archiwalna) {
		rez.zakwaterowana = true;
		zapiszRezerwacje();
		return true;
	}

	return false;
}

/**
* Wykwaterowywyje rezerwacje. Przy wykwaterowaniu zajmowany pokoj zostaje oznaczony jako do posprzatania
* Aby mozna dokonac wykwaterowania rezerwacja musi byc oplacona
**/
bool hotel_klasowy::ZarzadzanieRezerwacjami::wykwateruj(int idRezerwacji) {
	auto& rez = znajdzRezerwacje(idRezerwacji);
	if (rez.getId() != -1 && !rez.archiwalna && rez.oplacona) {
		rez.archiwalna = true;
		auto& pokoj = zarzadzaniePokojami->getPokoj(rez.nrPokoju);
		pokoj.do_sprzatania = true;
		zapiszRezerwacje();
		return true;
	}

	return false;
}

const hotel_klasowy::Rezerwacja hotel_klasowy::ZarzadzanieRezerwacjami::getRezerwacja(int id) {
	return znajdzRezerwacje(id);
}

const std::vector<hotel_klasowy::Rezerwacja> hotel_klasowy::ZarzadzanieRezerwacjami::getRezerwacjeUzytkownika(int idKlienta) const
{
	std::vector<Rezerwacja> rezUzytkoniwka;
	for (auto& r : rezerwacje) {
		if (r.getIdKlienta() == idKlienta) {
			rezUzytkoniwka.push_back(r);
		}
	}
	
	return rezUzytkoniwka;
}

void hotel_klasowy::ZarzadzanieRezerwacjami::zapiszRezerwacje() {
	ofstream myfile;
	myfile.open(DATA_FOLDER("rezerwacje.hotel"));
	myfile << nastepneId << "\n";
	if (myfile.is_open()) {
		for (auto& r : rezerwacje) {
			myfile << fmt::format("{};{};{};{};{:d};{:d};{:d}\n", r.getId(), r.getIdKlienta(), r.nrPokoju, r.terminPobytu.naString(), r.zakwaterowana, r.archiwalna, r.oplacona);
		}
		myfile.close();
	}
	else {
		throw "Unable to open rezerwacje.hotel file";
	}
}

