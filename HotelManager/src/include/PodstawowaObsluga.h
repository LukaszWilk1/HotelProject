#include <exception>
using namespace std;

#ifndef __PodstawowaObsluga_h__
#define __PodstawowaObsluga_h__

#include "Osoba.h"
#include "ZarzadzaniePokojami.h"
#include "ZarzadzanieRezerwacjami.h"

namespace hotel_klasowy
{
	class PodstawowaObsluga
	{

		public:
			PodstawowaObsluga(Osoba o, ZarzadzanieRezerwacjami& zr, ZarzadzaniePokojami& zp) : osoba(o), zarzadzanieRezerwacjami(zr), zarzadzaniePokojami(zp) {}
			virtual void interfejs() = 0;

		protected: 
			const Osoba osoba;
			ZarzadzaniePokojami& zarzadzaniePokojami;
			ZarzadzanieRezerwacjami& zarzadzanieRezerwacjami;
			virtual void dodajRezerwacje() = 0;
			virtual void wyswietlWszstkieRezerwacje() = 0;
			virtual void anulujRezerwacje(string idRezerwacji) = 0;
			virtual void anulujRezerwacje(int idRezerwacji) = 0;
			virtual void wyswietlRezerwacje(int idRezerwacji) = 0;
			virtual bool zmienTerminRezerwacji(int idRezerwacji) = 0;
	};
}

#endif
