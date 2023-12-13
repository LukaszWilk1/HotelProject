#include <string>
#include <vector>
using namespace std;

#ifndef __Pok�j_h__
#define __Pok�j_h__

#include "Rezerwacja.h"

namespace hotel_klasowy
{
	class Rezerwacja;
	class Pok�j;
}

namespace hotel_klasowy
{
	class Pok�j
	{
		public: int numer;
		public: int typ_pokoju;
		public: bool do_sprz?tania;
		public: bool zablokowany;
		public: string uwagi;
		public: std::vector<hotel_klasowy::Rezerwacja*> unnamed_Rezerwacja_;
	};
}

#endif
