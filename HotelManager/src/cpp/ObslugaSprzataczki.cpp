#include <exception>
#include <iostream>
using namespace std;

#include "PodstawowaObsluga.h"
#include "ObslugaSprzataczki.h"
#include "ZarzadzaniePokojami.h"
#include "ZarzadzanieRezerwacjami.h"
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

		switch (opcja) {
		case 1:
			wyswietlPokojeDoPosprzatania();
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 2:
			cout << "Podaj id pokoju do pospratania: ";
			int idDoSprzatania;
			cin >> idDoSprzatania;
			oznaczPokojJakoPosprzatany(idDoSprzatania);
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
	cout << "Lista pokoi do posprzatania" << endl;
	for (auto& p : zarzadzaniePokojami.getPokoje()) {
		if(p.do_sprzatania) cout << "Nr pokoju: " << p.numer << endl;
	}
}

bool hotel_klasowy::ObslugaSprzataczki::oznaczPokojJakoPosprzatany(int idPokoju) {
	system("cls");
	cout << "Pokoj posprzatany" << endl;
	return true;
}

