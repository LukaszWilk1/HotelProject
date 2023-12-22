#include <string>
using namespace std;

#ifndef __Osoba_h__
#define __Osoba_h__

namespace hotel_klasowy
{
	class Osoba;
}

namespace hotel_klasowy
{
	enum TypKonta {
		KLIENT = 0,
		RECEPCJA = 1,
		SPRZATACZKA = 2
	};

	class Osoba
	{
	public:
		Osoba(string im, string n, int i, int t) : imie(im), nazwisko(n), id(i), typ_konta(t) {}
		string imie;
		string nazwisko;
		int id;
		TypKonta typ_konta;
	};
}

#endif
