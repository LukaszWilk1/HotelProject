#include <exception>
using namespace std;

#ifndef __ObslugaRecepcji_h__
#define __ObslugaRecepcji_h__

#include "PodstawowaObsluga.h"
#include "Klient.h"
#include "Recepcjonista.h"
#include "BazaUzytkownikow.h"

namespace hotel_klasowy
{
	class Klient;
	class ObslugaRecepcji;
}

namespace hotel_klasowy
{
	class ObslugaRecepcji: public hotel_klasowy::PodstawowaObsluga
	{
		public:
			ObslugaRecepcji(Osoba r, ZarzadzanieRezerwacjami& zr, ZarzadzaniePokojami& zp, BazaUzytkownikow& b) : PodstawowaObsluga(r, zr, zp), bazaUzytkownikow(b) {};
			virtual void interfejs() override;

		private: 
			hotel_klasowy::Recepcjonista recepcjonista;
			BazaUzytkownikow& bazaUzytkownikow;
			void wyswietlPokoj(int idPokoju);
			void wyswietlWszystkiePokoje();
			bool zablokujPokoj(int idPokoju);
			bool zakwateruj(int idRezerwacji);
			bool wykwateruj(int idRezerwacji);
			void odblokujPokoj(int idPokoju);
			bool oplacRezerwacje(int idRezerwacji);

		protected: 
			virtual void dodajRezerwacje() override;
			virtual void wyswietlWszstkieRezerwacje() override;
			virtual void anulujRezerwacje(int idRezerwacji) override;
			virtual void wyswietlRezerwacje(int idRezerwacji) override;
			virtual bool zmienTerminRezerwacji(int idRezerwacji) override;
	};
}

#endif
