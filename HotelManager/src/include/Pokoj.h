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
		Pokoj() : numer(-1), typPokoju(-1), doSprzatania(0), zablokowany(0), uwagi("") {}
		Pokoj(int n, int typ, bool s, bool z, string u) : numer(n), typPokoju(typ), doSprzatania(s), zablokowany(z), uwagi(u) {}
		const int numer;
		const int typPokoju;
		bool doSprzatania;
		bool zablokowany;
		string uwagi;
	};
}

#endif
