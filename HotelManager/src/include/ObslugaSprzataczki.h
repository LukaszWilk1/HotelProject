#include <exception>
using namespace std;

#ifndef __ObslugaSprzataczki_h__
#define __ObslugaSprzataczki_h__

#include "Sprzataczka.h"
#include "ZarzadzaniePokojami.h"

namespace hotel_klasowy
{
	class ObslugaSprzataczki
	{
		public:
			ObslugaSprzataczki(Sprzataczka s, ZarzadzaniePokojami& zp) : osoba(s), zarzadzaniePokojami(zp) {}
			void interfejs();
			void wyswietlPokojeDoPosprzatania();
			bool oznaczPokojJakoPosprzatany(int idPokoju);

		private:
			const Sprzataczka osoba;
			const ZarzadzaniePokojami& zarzadzaniePokojami;
	};
}

#endif
