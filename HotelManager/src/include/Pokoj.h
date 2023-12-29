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
		int numer;
		int typ_pokoju;
		bool do_sprzatania;
		bool zablokowany;
		string uwagi;
	};
}

#endif
