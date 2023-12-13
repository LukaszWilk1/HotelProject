#include <exception>
using namespace std;

#ifndef __Zarz?dzanieRezerwacjami_h__
#define __Zarz?dzanieRezerwacjami_h__

#include "Rezerwacja.h"
#include "Klient.h"
#include "Termin.h"

namespace hotel_klasowy
{
	class Rezerwacja;
	class Klient;
	class Termin;
	class Zarz?dzanieRezerwacjami;
}

namespace hotel_klasowy
{
	class Zarz?dzanieRezerwacjami
	{
		private: hotel_klasowy::Rezerwacja rezerwacje[];

		public: int dodajRezerwacje(hotel_klasowy::Klient klient, hotel_klasowy::Termin termin, int typPokoju);

		public: bool anulujRezerwacje(int idRezerwacji);

		public: bool zmienTerminRezerwacji(int idRezerwacji);

		public: bool zakwateruj(int idRezerwacji);

		public: bool wykwateruj(int idRezerwacji);

		public: hotel_klasowy::Rezerwacja* getRezerwacja(string idRezerwacji);
	};
}

#endif
