#include <exception>
#include <iostream>
using namespace std;

#include "ObslugaSprzataczki.h"
#include "Sprzataczka.h"

void hotel_klasowy::ObslugaSprzataczki::interfejs() {
	string exit;
	do {
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

		while (opcja != 1 && opcja != 2 && opcja != 3) {
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

		int wpisano;
		switch (opcja) {
		case 1:
			wyswietlPokojeDoPosprzatania();
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 2:
			cout << "Podaj numer pokoju: ";
			cin >> wpisano;
			if (oznaczPokojJakoPosprzatany(wpisano)) {
				cout << "Pokoj nr. " << wpisano << " zostal oznaczony jako posprzatany.\n";
			}
			else {
				cout << "Nie ma pokoju o takim numerze\n";
			}
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 3:
			exit = "q";
			break;
		default:
			cout << "Cos poszlo nie tak" << endl;
		}
	} while (exit != "Q" && exit != "q");
}

void hotel_klasowy::ObslugaSprzataczki::wyswietlPokojeDoPosprzatania() {
	system("cls");
	cout << "Lista pokoi do posprzatania:" << endl;
	for (auto& p : zarzadzaniePokojami.getPokoje()) {
		if (p.do_sprzatania) {
			cout << "Nr. pokoju: " << p.numer << "; Uwagi: " << (p.uwagi.length() == 0 ? "Brak" : p.uwagi) << "\n";
		}
	}
}

bool hotel_klasowy::ObslugaSprzataczki::oznaczPokojJakoPosprzatany(int idPokoju) {
	system("cls");
	auto& p = zarzadzaniePokojami.getPokoj(idPokoju);
	if (p.numer != -1) {
		p.do_sprzatania = false;
		zarzadzaniePokojami.zapiszPokoje();
		return true;
	}
	return false;
}

