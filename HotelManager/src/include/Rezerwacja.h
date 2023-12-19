
#ifndef __Rezerwacja_h__
#define __Rezerwacja_h__

#include "Termin.h"
// #include "Pok�j.h"
// #include "Klient.h"

namespace hotel_klasowy
{
	class Termin;
	class Pok�j;
	class Klient;
	class Rezerwacja;
}

namespace hotel_klasowy
{
	class Rezerwacja
	{
		public: int id;
		public: int id_kllienta;
		public: int nr_pokoju;
		public: bool archiwalna;
		public: hotel_klasowy::Termin termin_pobytu;
		public: bool zakwaterowana;
		public: bool oplacona;
		public: hotel_klasowy::Pok�j* unnamed_Pok�j_;
		public: hotel_klasowy::Klient* unnamed_Klient_;
	};
}

#endif