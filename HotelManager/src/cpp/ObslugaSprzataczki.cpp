#include <exception>
#include <iostream>
using namespace std;

#include "ObslugaSprzataczki.h"
#include "Sprzataczka.h"

void hotel_klasowy::ObslugaSprzataczki::interfejs(Osoba osoba) {
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "-                                                                                                    " << osoba.imie << " " << osoba.nazwisko << " - " << endl;
	cout << "-                                    Jestes zalogowany/a jako Sprzatacz/ka                                     " << osoba.id << " -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                                   OPCJE                                                        -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                  ========================================                                      -" << endl;
	cout << "-                                  |                                      |                                      -" << endl;
	cout << "-                                  |  1. Wyswietl pokoje do posprzatania  |                                      -" << endl;
	cout << "-                                  |                                      |                                      -" << endl;
	cout << "-                                  |   2. Oznacz pokoj jako posprzatany   |                                      -" << endl;
	cout << "-                                  |                                      |                                      -" << endl;
	cout << "-                                  ========================================                                      -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------" << endl;
}

void hotel_klasowy::ObslugaSprzataczki::wyswietlPokojeDoPosprzatania() {
	throw "Not yet implemented";
}

bool hotel_klasowy::ObslugaSprzataczki::oznaczPokojJakoPosprzatany(int idPokoju) {
	throw "Not yet implemented";
}

