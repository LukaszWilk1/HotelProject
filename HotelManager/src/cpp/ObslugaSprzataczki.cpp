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
	int opcja = 0;
	cin >> opcja;

	while (opcja != 1 && opcja != 2) {
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
		cout << "Nie ma takiej operacji!" << endl;
		cin >> opcja;
	}

	switch (opcja) {
	case 1:
		wyswietlPokojeDoPosprzatania();
		break;
	case 2:
		oznaczPokojJakoPosprzatany(5);
		break;
	default:
		cout << "Cos poszlo nie tak" << endl;
	}
}

void hotel_klasowy::ObslugaSprzataczki::wyswietlPokojeDoPosprzatania() {
	system("cls");
	cout << "Lista pokoi do posprzatania" << endl;
}

bool hotel_klasowy::ObslugaSprzataczki::oznaczPokojJakoPosprzatany(int idPokoju) {
	system("cls");
	cout << "Pokoj posprzatany" << endl;
	return true;
}

