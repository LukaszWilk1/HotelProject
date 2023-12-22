#include <string>
#include "TypyKont.h"
using namespace std;

#ifndef __Osoba_h__
#define __Osoba_h__

namespace hotel_klasowy
{
	class Osoba;
}

namespace hotel_klasowy
{
	class Osoba
	{
	public:
		Osoba() {}
		Osoba(string im, string n, int i, TypKonta t) : imie(im), nazwisko(n), id(i), typ_konta(t) {}
		Osoba(const Osoba& o) : imie (o.imie), nazwisko(o.nazwisko), id(o.id), typ_konta(o.typ_konta) {}
    
		const string imie = "";
		const string nazwisko = "";
		const int id = -1;
		const TypKonta typ_konta = NONE;
	};
}

#endif
