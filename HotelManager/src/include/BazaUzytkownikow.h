#pragma once
#include "Osoba.h"

namespace hotel_klasowy {
	enum Typy_Kont {
		KLIENT = 0,
		RECEPCJA = 1,
		SPRZATACZKA = 2
	};

	class BazaUzytkownikow {
		Osoba getUzytkownik(int id) {
			return {
				"Adam",
				"Mrozek",
				0,
				RECEPCJA
			};
		}
	};
}