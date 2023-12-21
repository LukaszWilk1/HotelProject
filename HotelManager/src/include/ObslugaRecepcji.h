#include <exception>
using namespace std;

#ifndef __ObslugaRecepcji_h__
#define __ObslugaRecepcji_h__

#include "PodstawowaObsluga.h"
#include "Klient.h"
#include "Recepcjonista.h"

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
			ObslugaRecepcji() {};
			ObslugaRecepcji(Osoba r) : recepcjonista(r) {};
			bool oplacRezerwacje(int idRezerwacji);
			virtual void interfejs() override;

		private: 
			hotel_klasowy::Recepcjonista recepcjonista;
			void wyswietlPokoj(int idPokoju);
			void wyswietlWszystkiePokoje();
			bool zablokujPokoj(string idPokoju);
			bool zakwateruj(int idRezerwacji);
			bool wykwateruj(int idRezerwacji);
			void odblokujPokoj(int idPokoju);

		protected: 
			virtual void dodajRezerwacje() override;
			virtual void wyswietlWszstkieRezerwacje() override;
			virtual void anulujRezerwacje(int idRezerwacji) override;
			virtual void wyswietlRezerwacje(int idRezerwacji) override;
			virtual bool zmienTerminRezerwacji(int idRezerwacji) override;
	};
}

#endif
