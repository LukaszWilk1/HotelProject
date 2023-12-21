#include <exception>
using namespace std;

#ifndef __PodstawowaObsluga_h__
#define __PodstawowaObsluga_h__

#include "Osoba.h"

namespace hotel_klasowy
{
	class Osoba;
	class PodstawowaObsluga;
}

namespace hotel_klasowy
{
	class PodstawowaObsluga
	{

		public:
			PodstawowaObsluga() {}
			PodstawowaObsluga(Osoba o) : klient(o) {}
			virtual void interfejs() = 0;

		protected: 
			hotel_klasowy::Osoba klient;
			virtual void dodajRezerwacje() = 0;
			virtual void wyswietlWszstkieRezerwacje() = 0;
			virtual void anulujRezerwacje(int idRezerwacji) = 0;
			virtual void wyswietlRezerwacje(int idRezerwacji) = 0;
			virtual bool zmienTerminRezerwacji(int idRezerwacji) = 0;
	};
}

#endif
