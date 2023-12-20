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
		private: hotel_klasowy::Sprzataczka sprzataczka;

		public: void interfejs();

		public: void wyswietlPokojeDoPosprzatania();

		public: bool oznaczPokojJakoPosprzatany(int idPokoju);
	};
}

#endif
