#pragma once
#include "Osoba.h"
#include "TypyKont.h"

namespace hotel_klasowy {
	class BazaUzytkownikow {
	public: Osoba getUzytkownik(int id) {
			return {
				"Adam",
				"Mrozek",
				0,
				SPRZATACZKA
			};
		}
	};
}