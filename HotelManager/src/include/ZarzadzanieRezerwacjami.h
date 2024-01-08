#include <exception>
using namespace std;

#ifndef __ZarzadzanieRezerwacjami_h__
#define __ZarzadzanieRezerwacjami_h__

#include "Rezerwacja.h"
#include "Klient.h"
#include "Termin.h"

namespace hotel_klasowy
{
	class ZarzadzanieRezerwacjami
	{
	private: 
		std::vector<hotel_klasowy::Rezerwacja> rezerwacje;
		void odczytajRezerwacje();
		int nastepneId = 0;

	public:
		ZarzadzanieRezerwacjami();
		int dodajRezerwacje(Klient osoba, Termin termin, int typPokoju);
		bool anulujRezerwacje(int idRezerwacji);
		bool zmienTerminRezerwacji(int idRezerwacji, Termin nowy);
		bool zakwateruj(int idRezerwacji);
		bool wykwateruj(int idRezerwacji);
		const Rezerwacja getRezerwacja(int idRezerwacji) const;
		void zapiszRezerwacje();
		friend class ZarzadzaniePokojami;
	};
}

#endif
