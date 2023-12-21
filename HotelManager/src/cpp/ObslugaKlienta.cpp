#include <exception>
#include <iostream>
using namespace std;

#include "ObslugaKlienta.h"
#include "Klient.h"
#include "PodstawowaObsluga.h"

void hotel_klasowy::ObslugaKlienta::interfejs() {
	system("cls");
	cout << "Jestes zalogowany jako klient" << endl;
}

void hotel_klasowy::ObslugaKlienta::dodajRezerwacje()
{
}

void hotel_klasowy::ObslugaKlienta::wyswietlWszstkieRezerwacje()
{
}

void hotel_klasowy::ObslugaKlienta::anulujRezerwacje(int idRezerwacji)
{
}

void hotel_klasowy::ObslugaKlienta::wyswietlRezerwacje(int idRezerwacji)
{
}

bool hotel_klasowy::ObslugaKlienta::zmienTerminRezerwacji(int idRezerwacji)
{
	return false;
}

