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
		Termin() {};
		Termin(Data o, Data d) : odDnia(o), doDnia(d) {}
		Termin(std::string);
		hotel_klasowy::Data odDnia;
		hotel_klasowy::Data doDnia;
		int dlugosPobytu();
		/**
		*	Sprawdza czy termin zachodzi na drugi
		**/
		bool operator^(const Termin& rhs);
		std::string naString();
	};
}

#endif
