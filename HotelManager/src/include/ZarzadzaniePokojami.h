#include <exception>
using namespace std;

#ifndef __ZarzadzaniePokojami_h__
#define __ZarzadzaniePokojami_h__

#include "Pokój.h"
#include "Termin.h"

namespace hotel_klasowy
{
	class Pokój;
	class Termin;
	class ZarzadzaniePokojami;
}

namespace hotel_klasowy
{
	class ZarzadzaniePokojami
	{
		private: hotel_klasowy::Pokój listaPokoi[];

		public: int znajdzWolnyPokoj(int typPokoju, hotel_klasowy::Termin termin);

		public: hotel_klasowy::Pokój* getPokoj(int idPokoju);

		/// <summary>
		/// Zablokuj pokój je?eli nie posiada rezerwacji
		/// </summary>
		public: bool zablokujPokoj();
	};
}

#endif
