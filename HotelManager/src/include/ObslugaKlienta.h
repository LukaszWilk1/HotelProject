#include <exception>
using namespace std;

#ifndef __ObslugaKlienta_h__
#define __ObslugaKlienta_h__

#include "Klient.h"
#include "PodstawowaObsluga.h"

namespace hotel_klasowy
{
	class Klient;
	class ObslugaKlienta;
}

namespace hotel_klasowy
{
	class ObslugaKlienta : public hotel_klasowy::PodstawowaObsluga 
	{
	public:
		ObslugaKlienta() {}
		ObslugaKlienta(Osoba k) : PodstawowaObsluga(k) {}
		virtual void interfejs() override;

	private:
		virtual void dodajRezerwacje() override;
		virtual void wyswietlWszstkieRezerwacje() override;
		virtual void anulujRezerwacje(int idRezerwacji) override;
		virtual void wyswietlRezerwacje(int idRezerwacji) override;
		virtual bool zmienTerminRezerwacji(int idRezerwacji) override;
	};
}

#endif
