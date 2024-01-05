#include "BazaUzytkownikow.h"
#include <fstream>
#include <iostream>
#include "fmt/core.h"

hotel_klasowy::BazaUzytkownikow::BazaUzytkownikow()
{
	odczytajDane();
}

int hotel_klasowy::BazaUzytkownikow::dodajUzytkownika(string imie, string nazwisko, TypKonta typ)
{
    uzytkownicy.push_back({ imie, nazwisko, nextID++, typ });
	zapiszDane();
    return nextID - 1;
}

/**
	Wyszukuje uzytkownika na podstawie id
	@param id - id uzytkownika
	@returns Jezeli nie zostanie znaleziony zwraca pusta klase Osoba
**/
const hotel_klasowy::Osoba& hotel_klasowy::BazaUzytkownikow::getUzytkownik(int id) const
{
	for (auto& u : uzytkownicy) {
		if (u.id == id)
			return u;
	}
	return Osoba();
}

void hotel_klasowy::BazaUzytkownikow::zapiszDane() {
	ofstream myfile;
	myfile.open(DATA_FOLDER("users.hotel"));
	if (myfile.is_open()) {
		myfile << nextID << "\n";
		for (auto& o : uzytkownicy) {
			myfile << fmt::format("{:d};{};{};{:d}\n", o.id, o.imie, o.nazwisko, (int)o.typ_konta);
		}
		myfile.close();
	}
	else {
		throw "Unable to open users.hotel file";
	}
}

void hotel_klasowy::BazaUzytkownikow::odczytajDane() {
	uzytkownicy.clear();

	ifstream myfile;
	myfile.open(DATA_FOLDER("users.hotel"));
	if (myfile.is_open()) {
		string line;
		getline(myfile, line);
		nextID = stoi(line);
		while (getline(myfile, line))
		{
			auto sp = Utils::split(line, ";");
			Osoba o(sp[1], sp[2], stoi(sp[0]), (TypKonta)stoi(sp[3]));
			uzytkownicy.push_back(o);
		}
		myfile.close();
	}
	else {
		throw "Unable to open users.hotel file";
	}
}
