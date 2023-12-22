#pragma once
#include "Osoba.h"
#include "Utils.h"
#include <vector>

namespace hotel_klasowy {
	class BazaUzytkownikow {
	public:
		int dodajUzytkownika(string imie, string nazwisko, TypKonta typ);
		Osoba getUzytkownik(int id) {
			return {
				"Adam",
				"Mrozek",
				0,
				RECEPCJA
			};
		}
	private:
		std::vector<Osoba> uzytkownicy;
		int nextID = 0;
		void zapiszDane();
		void odczytajDane();
	};
}