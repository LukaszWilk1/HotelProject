#include <exception>
#include <iostream>
using namespace std;

#include "ObslugaSprzataczki.h"
#include "Sprzataczka.h"

void hotel_klasowy::ObslugaSprzataczki::interfejs() {
	system("cls");
	cout << "Jestes zalogowany jako Sprzataczka" << endl;
}

void hotel_klasowy::ObslugaSprzataczki::wyswietlPokojeDoPosprzatania() {
	throw "Not yet implemented";
}

bool hotel_klasowy::ObslugaSprzataczki::oznaczPokojJakoPosprzatany(int idPokoju) {
	throw "Not yet implemented";
}

