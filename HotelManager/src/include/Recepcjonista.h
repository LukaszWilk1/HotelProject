
#ifndef __Recepcjonista_h__
#define __Recepcjonista_h__

#include "Osoba.h"

namespace hotel_klasowy
{
	// class Osoba;
	class Recepcjonista;
}

namespace hotel_klasowy
{
	class Recepcjonista: public hotel_klasowy::Osoba
	{
	public:
		Recepcjonista(const Osoba& o) : Osoba(o) {};
		using Osoba::Osoba;
	};
}

#endif
