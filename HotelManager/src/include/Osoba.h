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
		Osoba(string im, string n, int i, int t) : imie(im), nazwisko(n), id(i), typ_konta(t) {}
		protected: string imie;
		protected: string nazwisko;
		protected: int id;
		protected: int typ_konta;
		
		public: int getTypKonta() {
			return typ_konta;
		}
	};
}

#endif
