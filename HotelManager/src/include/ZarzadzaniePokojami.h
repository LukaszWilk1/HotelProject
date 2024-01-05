#include <exception>
using namespace std;

#ifndef __ZarzadzaniePokojami_h__
#define __ZarzadzaniePokojami_h__

#include "Pokoj.h"
#include "Termin.h"
#include "OpisPokoju.h"

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
			ZarzadzaniePokojami();

			int znajdzWolnyPokoj(int typPokoju, hotel_klasowy::Termin termin);
			Pokoj& getPokoj(int idPokoju);
			const std::vector<OpisPokoju>& getRodzajePokoji() const {
				return rodzajePokoji;
			}
			const std::vector<Pokoj>& getPokoje() const {
				return listaPokoi;
			}
			void zapiszPokoje();


		private: 
			std::vector<Pokoj> listaPokoi;
			std::vector<OpisPokoju> rodzajePokoji;
			void odczytajPokoje();
			void odczytajRodzajePokoji();
	};
}

#endif
