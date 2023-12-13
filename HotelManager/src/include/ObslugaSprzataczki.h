#include <exception>
using namespace std;

#ifndef __ObslugaSprzataczki_h__
#define __ObslugaSprzataczki_h__

#include "Sprz?taczka.h"

namespace hotel_klasowy
{
	class Sprz?taczka;
	class ObslugaSprzataczki;
}

namespace hotel_klasowy
{
	class ObslugaSprzataczki
	{
		private: hotel_klasowy::Sprz?taczka sprzataczka;

		public: void interfejs();

		public: void wyswietlPokojeDoPosprzatania();

		public: bool oznaczPokojJakoPosprzatany(int idPokoju);
	};
}

#endif
