#include <exception>
#include <iostream>
using namespace std;

#include "ObslugaKlienta.h"
#include "Klient.h"
#include "PodstawowaObsluga.h"

void hotel_klasowy::ObslugaKlienta::interfejs() {
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                    Jestes zalogowany/a jako Klient/ka                                          -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                                   OPCJE                                                        -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                  ========================================                                      -" << endl;
	cout << "-                                  |                                      |                                      -" << endl;
	cout << "-                                  |         1. Dodaj Recerwacje          |                                      -" << endl;
	cout << "-                                  |                                      |                                      -" << endl;
	cout << "-                                  |   2. Wyswietl wszystkie rezerwacje   |                                      -" << endl;
	cout << "-                                  |                                      |                                      -" << endl;
	cout << "-                                  |         3. Anuluj rezerwacje         |                                      -" << endl;
	cout << "-                                  |                                      |                                      -" << endl;
	cout << "-                                  |        4. Wyswietl rezerwacje        |                                      -" << endl;
	cout << "-                                  |                                      |                                      -" << endl;
	cout << "-                                  |      5. Zmien termin rezerwacji      |                                      -" << endl;
	cout << "-                                  |                                      |                                      -" << endl;
	cout << "-                                  ========================================                                      -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------" << endl;
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

