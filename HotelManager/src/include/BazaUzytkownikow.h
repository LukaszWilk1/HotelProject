#pragma once
#include "Osoba.h"
#include "Utils.h"
#include <vector>
using namespace std;
namespace hotel_klasowy {
	class BazaUzytkownikow;
}

namespace hotel_klasowy {
	/**
		Przetrzymuje dane wszytkich uzytkownikow.
		Wszystkie dane sa zapisna w pliku `data/users.hotel`
	**/
	class BazaUzytkownikow {
	public:
		BazaUzytkownikow();
		int dodajUzytkownika(string imie, string nazwisko, TypKonta typ);
		Osoba getUzytkownik(int id) {
			return {
				"Adam",
				"Mrozek",
				0,
				KLIENT
			};
		}
	private:
		vector<Osoba> uzytkownicy;
		int nextID = 0;
		void zapiszDane();
		void odczytajDane();
	};
}