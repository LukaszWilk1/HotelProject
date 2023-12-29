#include <exception>
#include <fstream>
#include <Utils.h>
#include <iostream>
#include "fmt/core.h"
#include "ZarzadzaniePokojami.h"
#include "Pokoj.h"
#include "Termin.h"

using namespace std;

hotel_klasowy::ZarzadzaniePokojami::ZarzadzaniePokojami()
{
	odczytajRodzajePokoji();
	odczytajPokoje();
}

int hotel_klasowy::ZarzadzaniePokojami::znajdzWolnyPokoj(int typPokoju, hotel_klasowy::Termin termin) {
	throw "Not yet implemented";
}

const hotel_klasowy::Pokoj& hotel_klasowy::ZarzadzaniePokojami::getPokoj(int idPokoju) {
	throw "Not yet implemented";
}

bool hotel_klasowy::ZarzadzaniePokojami::zablokujPokoj(int id)
{
	return false;
}

void hotel_klasowy::ZarzadzaniePokojami::zapiszPokoje()
{
	ofstream myfile;
	myfile.open(DATA_FOLDER("users.hotel"));
	if (myfile.is_open()) {
		for (auto& p : listaPokoi) {
			myfile << fmt::format("{:d};{:d};{:b};{:b};{}\n", p.numer, p.typ_pokoju, p.zablokowany, p.do_sprzatania, p.uwagi);
		}
		myfile.close();
	}
	else {
		throw "Unable to open users.hotel file";
	}
}

void hotel_klasowy::ZarzadzaniePokojami::odczytajPokoje()
{
	listaPokoi.clear();

	ifstream myfile;
	myfile.open(DATA_FOLDER("pokoje.hotel"));
	if (myfile.is_open()) {
		string line;
		while (getline(myfile, line))
		{
			auto sp = Utils::split(line, ";");
			Pokoj p(stoi(sp[0]), stoi(sp[1]), stoi(sp[2]), stoi(sp[3]), sp[4]);
			listaPokoi.push_back(p);
		}
		myfile.close();
		for (auto& p : listaPokoi) {
			std::cout << fmt::format("{:d};{:d};{:b};{:b};{}\n", p.numer, p.typ_pokoju, p.zablokowany, p.do_sprzatania, p.uwagi);
		}
	}
	else {
		throw "Unable to open pokoje.hotel file";
	}
}

void hotel_klasowy::ZarzadzaniePokojami::odczytajRodzajePokoji()
{
}

