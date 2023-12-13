#include <exception>
using namespace std;

#ifndef __ObslugaKlienta_h__
#define __ObslugaKlienta_h__

#include "Klient.h"
#include "PodstawowaObsluga.h"

namespace hotel_klasowy
{
	class Klient;
	// class PodstawowaObsluga;
	class ObslugaKlienta;
}

namespace hotel_klasowy
{
	class ObslugaKlienta: public hotel_klasowy::PodstawowaObsluga
	{
		private: hotel_klasowy::Klient klient;

		/// <summary>
		/// /// <summary>
		/// /// Obs?uga iterfejsu klienta
		/// /// </summary>
		/// </summary>
		public: virtual void interfejs();

		protected: virtual void dodajRezerwacje();

		protected: virtual void wyswietlWszstkieRezerwacje();

		protected: virtual void anulujRezerwacje(string idRezerwacji);

		protected: virtual void wyswietlRezerwacje(int idRezerwacji);

		protected: virtual bool zmienTerminRezerwacji(int idRezerwacji);
	};
}

#endif
