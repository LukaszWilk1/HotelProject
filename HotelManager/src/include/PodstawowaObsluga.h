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
	__abstract class PodstawowaObsluga
	{
		protected: hotel_klasowy::Osoba klient;

		/// <summary>
		/// Obs?uga iterfejsu klienta
		/// </summary>
		public: virtual void interfejs() = 0;

		protected: virtual void dodajRezerwacje() = 0;

		protected: virtual void wyswietlWszstkieRezerwacje() = 0;

		protected: virtual void anulujRezerwacje(string idRezerwacji) = 0;

		protected: virtual void wyswietlRezerwacje(int idRezerwacji) = 0;

		protected: virtual bool zmienTerminRezerwacji(int idRezerwacji) = 0;
	};
}

#endif
