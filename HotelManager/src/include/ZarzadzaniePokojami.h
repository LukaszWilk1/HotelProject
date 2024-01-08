#include <exception>
#include <iostream>
using namespace std;

#ifndef __ZarzadzaniePokojami_h__
#define __ZarzadzaniePokojami_h__

#include "Pokoj.h"
#include "Termin.h"
#include "OpisPokoju.h"
#include "ZarzadzanieRezerwacjami.h"

namespace hotel_klasowy
{
	class Pokoj;
	class Termin;
	class ZarzadzaniePokojami;
}

namespace hotel_klasowy
{
	class ZarzadzaniePokojami
	{
		public:
			ZarzadzaniePokojami(ZarzadzanieRezerwacjami* zp);
			/**
			* Znajduje wolny pokoj w danym terminie
			* @returns numer znalezionego pokoju, -1 jezeli nie znaleniono wolnego pokoju o danym typie w chcianym terminie
			**/
			int znajdzWolnyPokoj(int typPokoju, hotel_klasowy::Termin termin);
			Pokoj& getPokoj(int idPokoju);
			const std::vector<OpisPokoju>& getRodzajePokoji() const {
				return rodzajePokoji;
			}
			const std::vector<Pokoj>& getPokoje() const {
				std::cout << listaPokoi.size() << "\n";
				return listaPokoi;
			}
			void zapiszPokoje();


		private: 
			std::vector<Pokoj> listaPokoi;
			std::vector<OpisPokoju> rodzajePokoji;
			ZarzadzanieRezerwacjami* zarzadzanieRezerwacjami;
			void odczytajPokoje();
			void odczytajRodzajePokoji();
	};
}

#endif
