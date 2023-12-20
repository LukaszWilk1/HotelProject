#include <exception>
using namespace std;

#ifndef __ZarzadzanieHotelem_h__
#define __ZarzadzanieHotelem_h__

#include "ZarzadzanieRezerwacjami.h"
#include "ZarzadzaniePokojami.h"

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
		private: hotel_klasowy::ZarzadzanieRezerwacjami zarzadzanieRezerwacjami;
		private: hotel_klasowy::ZarzadzaniePokojami zarzadzaniePokojami;

		public: void start();
	};
}

#endif
