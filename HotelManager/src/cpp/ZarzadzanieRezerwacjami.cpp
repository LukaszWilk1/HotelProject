#include <exception>
#include <fstream>
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
		while (getline(myfile, line))
		{
			auto sp = Utils::split(line, ";");
			Rezerwacja r;
			rezerwacje.push_back(r);
		}
		myfile.close();
	}
	else {
		throw "Unable to open pokoje.hotel file";
	}
}

int hotel_klasowy::ZarzadzanieRezerwacjami::dodajRezerwacje(hotel_klasowy::Klient osoba, hotel_klasowy::Termin termin, int typPokoju) {
	throw "Not yet implemented";
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
	if (myfile.is_open()) {
		for (auto& p : rezerwacje) {
			myfile << fmt::format("{:d};{:d};{:b};{:b};{}\n", p.numer, p.typ_pokoju, p.zablokowany, p.do_sprzatania, p.uwagi);
		}
		myfile.close();
	}
	else {
		throw "Unable to open users.hotel file";
	}
}

