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
	__abstract class Osoba
	{
		protected: string imi?;
		protected: string nazwisko;
		protected: int id;
		protected: int typ_konta;
	};
}

#endif
