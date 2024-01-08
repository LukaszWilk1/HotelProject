#include <string>
#include "fmt/core.h"
using namespace std;

#include "Termin.h"
#include "Data.h"
#include "Utils.h"

hotel_klasowy::Termin::Termin(std::string s) {
	auto dList = Utils::split(s, "->");
	odDnia = Data(std::stoi(dList[0]));
	doDnia = Data(std::stoi(dList[1]));
}

/**
*	Zwraca dlugosc terminu w nocach
**/
int hotel_klasowy::Termin::dlugosPobytu() {
	return doDnia - odDnia;
}

/**
*	Sprawdza czy termin zachodzi na drugi
**/
bool hotel_klasowy::Termin::operator^(const Termin& rhs) {
	return odDnia < rhs.doDnia && doDnia > rhs.odDnia;
}

std::string hotel_klasowy::Termin::naString()
{
	return fmt::format("{}->{}", odDnia.naDni(), doDnia.naDni());
}

