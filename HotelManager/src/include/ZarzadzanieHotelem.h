#include <exception>
using namespace std;

#ifndef __ZarzadzanieHotelem_h__
#define __ZarzadzanieHotelem_h__

#include "ZarzadzanieRezerwacjami.h"
#include "ZarzadzaniePokojami.h"
#include "BazaUzytkownikow.h"

namespace hotel_klasowy
{
	class ZarzadzanieRezerwacjami;
	class ZarzadzaniePokojami;
	class ZarzadzanieHotelem;
}

namespace hotel_klasowy
{
	class ZarzadzanieHotelem
	{
		private:
			ZarzadzanieRezerwacjami zarzadzanieRezerwacjami;
			ZarzadzaniePokojami zarzadzaniePokojami;
			BazaUzytkownikow bazaUzytkownikow;

		public:
			ZarzadzanieHotelem() : zarzadzanieRezerwacjami(&zarzadzaniePokojami), zarzadzaniePokojami(&zarzadzanieRezerwacjami) {}
			void start();
	};
}

#endif
