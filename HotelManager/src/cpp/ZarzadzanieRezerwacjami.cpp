#include <exception>
#include <fstream>
#include <string>
#include "fmt/core.h"
using namespace std;

#include "ZarzadzanieRezerwacjami.h"
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

hotel_klasowy::ZarzadzanieRezerwacjami::ZarzadzanieRezerwacjami() {
	odczytajRezerwacje();
}

/**
* Dodaje rezerwacje
* @returns id dodanej rezerwacji, -1 jezeli nie udalo sie dodac rezerwacji w danym terminie
**/
int hotel_klasowy::ZarzadzanieRezerwacjami::dodajRezerwacje(hotel_klasowy::Klient osoba, hotel_klasowy::Termin termin, int typPokoju) {
	return -1;
}

bool hotel_klasowy::ZarzadzanieRezerwacjami::anulujRezerwacje(int idRezerwacji) {
	throw "Not yet implemented";
}

bool hotel_klasowy::ZarzadzanieRezerwacjami::zmienTerminRezerwacji(int idRezerwacji, Termin nowy)
{
	return false;
}

bool hotel_klasowy::ZarzadzanieRezerwacjami::zakwateruj(int idRezerwacji) {
	throw "Not yet implemented";
}

bool hotel_klasowy::ZarzadzanieRezerwacjami::wykwateruj(int idRezerwacji) {
	throw "Not yet implemented";
}

const hotel_klasowy::Rezerwacja hotel_klasowy::ZarzadzanieRezerwacjami::getRezerwacja(int idRezerwacji) const
{
	return Rezerwacja();
}

void hotel_klasowy::ZarzadzanieRezerwacjami::zapiszRezerwacje() {
	ofstream myfile;
	myfile.open(DATA_FOLDER("rezerwacje.hotel"));
	myfile << nastepneId << "\n";
	if (myfile.is_open()) {
		for (auto& r : rezerwacje) {
			myfile << fmt::format("{};{};{};{};{};{};{}\n", r.id, r.idKllienta, r.nrPokoju, r.terminPobytu.naString(), r.zakwaterowana, r.archiwalna, r.oplacona);
		}
		myfile.close();
	}
	else {
		throw "Unable to open rezerwacje.hotel file";
	}
}

