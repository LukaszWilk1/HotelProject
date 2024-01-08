
#ifndef __Rezerwacja_h__
#define __Rezerwacja_h__

#include "Termin.h"

namespace hotel_klasowy
{
	class Termin;
	class Pokoj;
	class Klient;
	class Rezerwacja;
}

namespace hotel_klasowy
{
	class Rezerwacja {
	public:
		Rezerwacja(): id(-1), idKllienta(-1) {
			nrPokoju = -1;
			archiwalna = false;
			zakwaterowana = false;
			oplacona = false;
		}
		Rezerwacja(int id, int idKlienta, int nPokoju, Termin t, bool archiwalna = false, bool zak = false, bool op = false) 
			: id(-1), idKllienta(idKlienta), terminPobytu(t), nrPokoju(nPokoju), archiwalna(archiwalna), zakwaterowana(zak), oplacona(op) {}
		const int id;
		const int idKllienta;
		int nrPokoju;
		bool archiwalna;
		Termin terminPobytu;
		bool zakwaterowana;
		bool oplacona;
	};
}

#endif
