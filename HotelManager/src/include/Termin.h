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
	public: 
		hotel_klasowy::Date from;
		hotel_klasowy::Date to;
		int dlugosPobytu();
	};
}

#endif
