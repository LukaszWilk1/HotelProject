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
			const Pokoj& getPokoj(int idPokoju);
			bool zablokujPokoj(int id);
			const std::vector<OpisPokoju>& getRodzajePokoji() const {
				return rodzajePokoji;
			}


		private: 
			std::vector<Pokoj> listaPokoi;
			std::vector<OpisPokoju> rodzajePokoji;
			void zapiszPokoje();
			void odczytajPokoje();
			void odczytajRodzajePokoji();
	};
}

#endif
