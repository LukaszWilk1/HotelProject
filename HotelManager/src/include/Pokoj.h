#include <string>
#include <vector>
using namespace std;

#ifndef __Pokoj_h__
#define __Pokoj_h__

#include "Rezerwacja.h"

namespace hotel_klasowy
{
	class Rezerwacja;
	class Pokoj;
}

namespace hotel_klasowy
{
	class Pokoj
	{
	public:
		Pokoj(int n, int typ, bool s, bool z, string u) : numer(n), typ_pokoju(typ), do_sprzatania(s), zablokowany(z), uwagi(u) {}
		const int numer;
		const int typ_pokoju;
		bool do_sprzatania;
		bool zablokowany;
		string uwagi;
	};
}

#endif
