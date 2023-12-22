#include <vector>
using namespace std;

#ifndef __Klient_h__
#define __Klient_h__

#include "Rezerwacja.h"
#include "Osoba.h"

namespace hotel_klasowy
{
	class Rezerwacja;
	// class Osoba;
	class Klient;
}

namespace hotel_klasowy
{
	class Klient: public hotel_klasowy::Osoba
	{
	public:
		Klient(const Osoba& o) : Osoba(o) {};
		using Osoba::Osoba;
	};
}

#endif
