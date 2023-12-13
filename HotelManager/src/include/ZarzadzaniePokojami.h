#include <exception>
using namespace std;

#ifndef __ZarzadzaniePokojami_h__
#define __ZarzadzaniePokojami_h__

#include "Pok�j.h"
#include "Termin.h"

namespace hotel_klasowy
{
	class Pok�j;
	class Termin;
	class ZarzadzaniePokojami;
}

namespace hotel_klasowy
{
	class ZarzadzaniePokojami
	{
		private: hotel_klasowy::Pok�j listaPokoi[];

		public: int znajdzWolnyPokoj(int typPokoju, hotel_klasowy::Termin termin);

		public: hotel_klasowy::Pok�j* getPokoj(int idPokoju);

		/// <summary>
		/// Zablokuj pok�j je?eli nie posiada rezerwacji
		/// </summary>
		public: bool zablokujPokoj();
	};
}

#endif
