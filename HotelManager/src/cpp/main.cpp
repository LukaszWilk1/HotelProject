#include <iostream>
#include "ZarzadzanieHotelem.h"

using namespace std;

#include "ZarzadzaniePokojami.h"


int main() {
	hotel_klasowy::ZarzadzaniePokojami z();

	hotel_klasowy::ZarzadzanieHotelem zarzadanie;
	zarzadanie.start();
}