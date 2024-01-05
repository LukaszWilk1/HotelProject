#include <exception>
using namespace std;

#ifndef __Termin_h__
#define __Termin_h__

#include "Data.h"

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
		hotel_klasowy::Data from;
		hotel_klasowy::Data to;
		int dlugosPobytu();
	};
}

#endif
