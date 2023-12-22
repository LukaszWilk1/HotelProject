
#ifndef __Sprzataczka_h__
#define __Sprzataczka_h__

#include "Osoba.h"

namespace hotel_klasowy
{
	// class Osoba;
	class Sprzataczka;
}

namespace hotel_klasowy
{
	class Sprzataczka: public hotel_klasowy::Osoba
	{
	public:
		Sprzataczka(const Osoba& o) : Osoba(o) {};
		using Osoba::Osoba;
	};
}

#endif
