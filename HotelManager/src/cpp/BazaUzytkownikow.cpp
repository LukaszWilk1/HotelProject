#include "BazaUzytkownikow.h"
#include <fstream>

int hotel_klasowy::BazaUzytkownikow::dodajUzytkownika(string imie, string nazwisko, TypKonta typ)
{
    uzytkownicy.push_back({ imie, nazwisko, nextID++, typ });
    return nextID;
}

void hotel_klasowy::BazaUzytkownikow::zapiszDane() {
	ofstream myfile;
	myfile.open(DATA_FOLDER("users.hotel"));
	if (myfile.is_open()) {
		myfile << nextID << "\n";
		for (auto& o : uzytkownicy) {
			myfile << o.id << ";" << o.imie << ";" << o.typ_konta << "\n";
		}
		myfile.close();
	}
	else {
		throw "Unable to open users.hotel file";
	}
}

void hotel_klasowy::BazaUzytkownikow::odczytajDane() {
	ifstream myfile;
	myfile.open(DATA_FOLDER("users.hotel"));
	if (myfile.is_open()) {
		string line;
		getline(myfile, line);
		nextID = stoi(line);
		while (getline(myfile, line))
		{
			//cout << line << '\n';
		}
	}
	else {
		throw "Unable to open users.hotel file";
	}
}
