#include <exception>
#include <fstream>
#include <Utils.h>
#include <yaml-cpp/yaml.h>
#include "fmt/core.h"
#include "ZarzadzaniePokojami.h"
#include "Pokoj.h"
#include "Termin.h"

using namespace std;

hotel_klasowy::ZarzadzaniePokojami::ZarzadzaniePokojami(ZarzadzanieRezerwacjami* zr) : zarzadzanieRezerwacjami(zr)
{
	odczytajRodzajePokoji();
	odczytajPokoje();
}

int hotel_klasowy::ZarzadzaniePokojami::znajdzWolnyPokoj(int typPokoju, Termin termin) {
	std::vector<int> zajetePokojeWTerminie(10);
	for (auto& rezerwacja : zarzadzanieRezerwacjami->rezerwacje) {
		if (!rezerwacja.archiwalna && termin ^ rezerwacja.terminPobytu) {
			zajetePokojeWTerminie.push_back(rezerwacja.nrPokoju);
		}
	}

	return -1;
}

hotel_klasowy::Pokoj& hotel_klasowy::ZarzadzaniePokojami::getPokoj(int idPokoju) {
	for (auto& p : listaPokoi) {
		if (p.numer == idPokoju) return p;
	}
	return Pokoj();
}

void hotel_klasowy::ZarzadzaniePokojami::zapiszPokoje()
{
	ofstream myfile;
	myfile.open(DATA_FOLDER("pokoje.hotel"));
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
	}
	else {
		throw "Unable to open pokoje.hotel file";
	}
}

void hotel_klasowy::ZarzadzaniePokojami::odczytajRodzajePokoji()
{
	YAML::Node config = YAML::LoadFile(DATA_FOLDER("hotel_data.yaml"));
	if (config["typy_pokoji"]) {
		for (auto& n : config["typy_pokoji"]) {
			OpisPokoju p = n.as<OpisPokoju>();
			rodzajePokoji.push_back(p);
		}
	}
	else {
		throw "Missing typy_pokoji in hotel_data.yaml";
	}
}

