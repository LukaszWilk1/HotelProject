#include <exception>
#include <iostream>
using namespace std;

#include "ObslugaKlienta.h"
#include "Klient.h"
#include "PodstawowaObsluga.h"

void hotel_klasowy::ObslugaKlienta::interfejs() {
	system("cls");
	cout << "------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "-                                                                                                    "<< osoba.imie << " " << osoba.nazwisko << " - " << endl;
	cout << "-                                    Jestes zalogowany/a jako Klient/ka                                        "<<osoba.id<<" -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "-                                                                                                                -" << endl;
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
	int opcja = 0;
	cin >> opcja;

	while (opcja != 1 && opcja != 2 && opcja != 3 && opcja != 4 && opcja != 5) {
		system("cls");
		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "-                                                                                                    " << osoba.imie << " " << osoba.nazwisko << " - " << endl;
		cout << "-                                    Jestes zalogowany/a jako Klient/ka                                        " << osoba.id << " -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "-                                                                                                                -" << endl;
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
		cout << "Nie ma takiej operacji!" << endl;
		cin >> opcja;
	}

	switch (opcja) {
	case 1:
		dodajRezerwacje();
		break;
	case 2:
		wyswietlWszstkieRezerwacje();
		break;
	case 3:
		anulujRezerwacje(2);
		break;
	case 4:
		wyswietlRezerwacje(2);
		break;
	case 5:
		zmienTerminRezerwacji(2);
		break;
	}
}

void hotel_klasowy::ObslugaKlienta::dodajRezerwacje()
{
	system("cls");
	cout << "Dodawanie rezerwacji" << endl;
}

void hotel_klasowy::ObslugaKlienta::wyswietlWszstkieRezerwacje()
{
	system("cls");
	cout << "Wyswietlanie wszystkich rezerwacji" << endl;
}

void hotel_klasowy::ObslugaKlienta::anulujRezerwacje(int idRezerwacji)
{
	system("cls");
	cout << "Anulowanie rezerwacji" << endl;
}

void hotel_klasowy::ObslugaKlienta::wyswietlRezerwacje(int idRezerwacji)
{
	system("cls");
	cout << "Wyswietlenie rezerwacji" << endl;
}

bool hotel_klasowy::ObslugaKlienta::zmienTerminRezerwacji(int idRezerwacji)
{
	system("cls");
	cout << "Zmiana terminu rezerwacji" << endl;
	return false;
}

void hotel_klasowy::ObslugaKlienta::anulujRezerwacje(string idRezerwacji)
{
}

