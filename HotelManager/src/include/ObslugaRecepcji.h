#include <exception>
using namespace std;

#ifndef __ObslugaRecepcji_h__
#define __ObslugaRecepcji_h__

#include "PodstawowaObsluga.h"

namespace hotel_klasowy
{
	// class PodstawowaObsluga;
	class ObslugaRecepcji;
}

namespace hotel_klasowy
{
	class ObslugaRecepcji: public hotel_klasowy::PodstawowaObsluga
	{
		private: hotel_klasowy::ObslugaRecepcji klient;

		public: bool oplacRezerwacje(int idRezerwacji);

		private: void wyswietlPokoj(int idPokoju);

		private: void wyswietlWszystkiePokoje();

		private: bool zablokujPokoj(string idPokoju);

		private: bool zakwateruj(int idRezerwacji);

		private: bool wykwateruj(int idRezerwacji);

		private: void odblokujPokoj(int idPokoju);

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
