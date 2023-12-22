#include <exception>
using namespace std;

#ifndef __ZarzadzaniePokojami_h__
#define __ZarzadzaniePokojami_h__

#include "Pokoj.h"
#include "Termin.h"

namespace hotel_klasowy
{
	class Pokoj;
	class Termin;
	class ZarzadzaniePokojami;
}

namespace hotel_klasowy
{
	class ZarzadzaniePokojami
	{
		public: 
			int znajdzWolnyPokoj(int typPokoju, hotel_klasowy::Termin termin);
			Pokoj* getPokoj(int idPokoju);
			bool zablokujPokoj();

		private: 
			std::vector<Pokoj> listaPokoi;
	};
}

#endif
