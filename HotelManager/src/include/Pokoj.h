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
		public: int numer;
		public: int typ_pokoju;
		public: bool do_sprzatania;
		public: bool zablokowany;
		public: string uwagi;
		public: std::vector<hotel_klasowy::Rezerwacja*> unnamed_Rezerwacja_;
	};
}

#endif
