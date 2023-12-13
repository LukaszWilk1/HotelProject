#include <exception>
using namespace std;

#ifndef __Termin_h__
#define __Termin_h__

#include "Date.h"

namespace hotel_klasowy
{
	class Date;
	class Termin;
}

namespace hotel_klasowy
{
	class Termin
	{
		public: hotel_klasowy::Date od;
		public: hotel_klasowy::Date do_5;

		public: int dlugosPobytu();

		public: void setOd(hotel_klasowy::Date od);

		public: hotel_klasowy::Date getOd();

		public: void setDo_5(hotel_klasowy::Date do_5);

		public: hotel_klasowy::Date getDo_5();
	};
}

#endif
