#include <exception>
using namespace std;

#include "Termin.h"
#include "Data.h"

/**
*	Zwraca dlugosc terminu w nocach
**/
int hotel_klasowy::Termin::dlugosPobytu() {
	return doDnia - odDnia;
}

/**
*	Sprawdza czy terminy zachodza na siebie
**/
bool hotel_klasowy::Termin::operator^(const Termin& rhs) {
	return odDnia < rhs.doDnia && doDnia > rhs.odDnia;
}

