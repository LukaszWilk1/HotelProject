#include <exception>
using namespace std;

#include "Termin.h"
#include "Date.h"

int hotel_klasowy::Termin::dlugosPobytu() {
	throw "Not yet implemented";
}

void hotel_klasowy::Termin::setOd(hotel_klasowy::Date od) {
	this->od = od;
}

hotel_klasowy::Date hotel_klasowy::Termin::getOd() {
	return this->od;
}

void hotel_klasowy::Termin::setDo_5(hotel_klasowy::Date do_5) {
	this->do_5 = do_5;
}

hotel_klasowy::Date hotel_klasowy::Termin::getDo_5() {
	return this->do_5;
}

