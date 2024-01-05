#include <stdlib.h>
#include <algorithm>
#include "fmt/core.h"
#include "Data.h"

bool jestPzestepny(int y) {
	return (y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0);
}

int dniWMies(int mies, int rok) {
	const int DniNaMies[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (mies == 2 && jestPzestepny(rok)) return 29; // dla lutego
	return DniNaMies[mies - 1];
}

/**
*	Zwraca ilosc przestepnych lat od roku 1 do podanego
*	@param r - aktualny rok
**/
int ilePrzestepnych(int r) {
	int lat = r;
	if (jestPzestepny(r)) lat--;
	return lat / 4 - lat / 100 + lat / 400;
}

hotel_klasowy::Data::Data() {
	dzien = 1;
	miesiac = 1;
	rok = 1;
}

hotel_klasowy::Data::Data(int dni) {
	rok = dni * 0.0027379 + 1;
	dni -= (rok - 1) * 365.2425;
	miesiac = 1;
	while (dni > 31) {
		dni -= dniWMies(miesiac, rok);
		miesiac++;
	}
	dzien = dni;
}

hotel_klasowy::Data::Data(int d, int m, int y) {
	setRok(y);
	setMiesiac(m);
	setDzien(d);
}

void hotel_klasowy::Data::setDzien(int dzien) {
	int maxDni = dniWMies(miesiac, rok);
	dzien = std::max(std::min(std::abs(dzien), maxDni), 1);
	this->dzien = dzien;
}

const int hotel_klasowy::Data::getDzien() const {
	return this->dzien;
}

void hotel_klasowy::Data::setMiesiac(int miesiac) {
	this->miesiac = std::max(std::min(std::abs(miesiac), 12), 1);
}

const int hotel_klasowy::Data::getMiesiac() const {
	return this->miesiac;
}

void hotel_klasowy::Data::setRok(int rok) {
	this->rok = std::abs(rok);
}

const int hotel_klasowy::Data::getRok() const {
	return this->rok;
}

/**
*	Zwraca ilosc dni od daty 1.1.1 
**/
const int hotel_klasowy::Data::naDni() const {
	int rokNaDni = (rok - 1) * 365;
	rokNaDni += ilePrzestepnych(rok);

	int miesNaDni = 0;
	for (int i = 1; i < miesiac; i++) {
		miesNaDni += dniWMies(i, rok);
	}

	return dzien + miesNaDni + rokNaDni;
}

/**
*	Oblicz roznice w dniach miedzy datami (nie uwzglednia aktualnego dnia)
**/
int hotel_klasowy::Data::operator-(const Data& rhs) {
	return naDni() - rhs.naDni();
}

hotel_klasowy::Data hotel_klasowy::Data::operator-(const int& rhs) {
	int d = naDni() - rhs;
	return Data(d);
}

hotel_klasowy::Data hotel_klasowy::Data::operator+(const int& rhs) {
	int d = naDni() + rhs;
	return Data(d);
}

bool hotel_klasowy::Data::operator==(const Data& rhs)
{
	return dzien == rhs.dzien && miesiac == rhs.miesiac && rok == rhs.rok;
}

std::ostream& hotel_klasowy::operator<<(std::ostream& stream, const Data& d)
{
	stream << fmt::format("{}.{}.{}", d.dzien, d.miesiac, d.rok);
	return stream;
}
