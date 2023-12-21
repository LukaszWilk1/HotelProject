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
	class Osoba
	{
	public:
		Osoba() {}
		Osoba(string im, string n, int i, int t) : imie(im), nazwisko(n), id(i), typ_konta(t) {}
		Osoba(const Osoba& o) {
			imie = o.imie;
			nazwisko = o.nazwisko;
			id = o.id;
			typ_konta = o.typ_konta;
		}
		protected: string imie = "";
		protected: string nazwisko = "";
		protected: int id = -1;
		protected: int typ_konta = -1;
		
		public: int getTypKonta() {
			return typ_konta;
		}
	};
}

#endif
