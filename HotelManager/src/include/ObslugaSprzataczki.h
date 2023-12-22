#include <exception>
using namespace std;

#ifndef __ObslugaSprzataczki_h__
#define __ObslugaSprzataczki_h__

#include "Sprzataczka.h"

namespace hotel_klasowy
{
	class Sprzataczka;
	class ObslugaSprzataczki;
}

namespace hotel_klasowy
{
	class ObslugaSprzataczki
	{
		public:
			ObslugaSprzataczki(Sprzataczka s) : sprzataczka(s) {}
			void interfejs();
			void wyswietlPokojeDoPosprzatania();
			bool oznaczPokojJakoPosprzatany(int idPokoju);

		private: hotel_klasowy::Sprzataczka sprzataczka;
	};
}

#endif
