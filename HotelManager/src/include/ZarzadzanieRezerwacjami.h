#include <exception>
using namespace std;

#ifndef __ZarzadzanieRezerwacjami_h__
#define __ZarzadzanieRezerwacjami_h__

#include "Rezerwacja.h"
#include "Klient.h"
#include "Termin.h"


namespace hotel_klasowy
{
	class ZarzadzaniePokojami;
	class ZarzadzanieRezerwacjami
	{
	private: 
		std::vector<Rezerwacja> rezerwacje;
		void odczytajRezerwacje();
		Rezerwacja& znajdzRezerwacje(int id);
		int nastepneId = 0;
		ZarzadzaniePokojami* zarzadzaniePokojami;

	public:
		ZarzadzanieRezerwacjami(ZarzadzaniePokojami* zp);
		int dodajRezerwacje(Klient osoba, Termin termin, int typPokoju);
		bool anulujRezerwacje(int idRezerwacji);
		bool zmienTerminRezerwacji(int idRezerwacji, Termin nowy);
		bool zakwateruj(int idRezerwacji);
		bool wykwateruj(int idRezerwacji);
		bool oplacRezerwacje(int idRezerwacji);
		const Rezerwacja getRezerwacja(int idRezerwacji);
		const std::vector<Rezerwacja> getRezerwacjeUzytkownika(int idKlienta) const;
		const std::vector<Rezerwacja> getWszystkieRezerwacje() const {
			return rezerwacje;
		}
		void zapiszRezerwacje();
		friend class ZarzadzaniePokojami;
	};
}

#endif
