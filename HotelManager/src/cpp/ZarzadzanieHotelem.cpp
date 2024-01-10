#include <exception>
#include <iostream>
using namespace std;

#include "ZarzadzanieHotelem.h"
#include "ZarzadzanieRezerwacjami.h"
#include "ZarzadzaniePokojami.h"
#include "BazaUzytkownikow.h"
#include "Osoba.h"
#include "ObslugaKlienta.h"
#include "ObslugaRecepcji.h"
#include "ObslugaSprzataczki.h"

void hotel_klasowy::ZarzadzanieHotelem::start() {
	int id, opcja;
	bool zarejestrowano = true;
	while (zarejestrowano) {
		zarejestrowano = false;
		system("cls");
		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "-                                                    WITAJ                                                       -" << endl;
		cout << "-                                           =======================                                              -" << endl;
		cout << "-                                           |                     |                                              -" << endl;
		cout << "-                                           |    1. Logowanie     |                                              -" << endl;
		cout << "-                                           |                     |                                              -" << endl;
		cout << "-                                           |   2. Rejestracja    |                                              -" << endl;
		cout << "-                                           |                     |                                              -" << endl;
		cout << "-                                           =======================                                              -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
		cin >> opcja;
		while (opcja != 1 && opcja != 2) {
			system("cls");
			cout << "------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                    WITAJ                                                       -" << endl;
			cout << "-                                           =======================                                              -" << endl;
			cout << "-                                           |                     |                                              -" << endl;
			cout << "-                                           |    1. Logowanie     |                                              -" << endl;
			cout << "-                                           |                     |                                              -" << endl;
			cout << "-                                           |   2. Rejestracja    |                                              -" << endl;
			cout << "-                                           |                     |                                              -" << endl;
			cout << "-                                           =======================                                              -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "Nie ma takiej opcji!" << endl;
			cin >> opcja;
		};

		if (opcja == 1) {
			system("cls");
			cout << "------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                  LOGOWANIE                                                     -" << endl;
			cout << "-                                           =======================                                              -" << endl;
			cout << "-                                           |                     |                                              -" << endl;
			cout << "-                                           |      Podaj ID:      |                                              -" << endl;
			cout << "-                                           |                     |                                              -" << endl;
			cout << "-                                           =======================                                              -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------" << endl;
			cin >> id;
			hotel_klasowy::Osoba uzytkownik = bazaUzytkownikow.getUzytkownik(id);
			hotel_klasowy::TypKonta typKonta = uzytkownik.typKonta;

			while (typKonta == NONE) {
				system("cls");
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "-                                                                                                                -" << endl;
				cout << "-                                                                                                                -" << endl;
				cout << "-                                                                                                                -" << endl;
				cout << "-                                                                                                                -" << endl;
				cout << "-                                                  LOGOWANIE                                                     -" << endl;
				cout << "-                                           =======================                                              -" << endl;
				cout << "-                                           |                     |                                              -" << endl;
				cout << "-                                           |      Podaj ID:      |                                              -" << endl;
				cout << "-                                           |                     |                                              -" << endl;
				cout << "-                                           =======================                                              -" << endl;
				cout << "-                                                                                                                -" << endl;
				cout << "-                                                                                                                -" << endl;
				cout << "-                                                                                                                -" << endl;
				cout << "-                                                                                                                -" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "Uzytkownik o tym ID nie istnieje! Wprowadz poprawne ID: ";
				cin >> id;
				typKonta = bazaUzytkownikow.getUzytkownik(id).typKonta;
			}

			if (typKonta == KLIENT) {
				hotel_klasowy::ObslugaKlienta obslugaKlienta(uzytkownik, zarzadzanieRezerwacjami, zarzadzaniePokojami);
				obslugaKlienta.interfejs();
			}
			else if (typKonta == RECEPCJA) {
				hotel_klasowy::ObslugaRecepcji obslugaRecepcji(uzytkownik, zarzadzanieRezerwacjami, zarzadzaniePokojami, bazaUzytkownikow);
				obslugaRecepcji.interfejs();
			}
			else if (typKonta == SPRZATACZKA) {
				hotel_klasowy::ObslugaSprzataczki obslugaSprzataczki(uzytkownik, zarzadzaniePokojami);
				obslugaSprzataczki.interfejs();
			}
		}

		else if (opcja == 2) {
			system("cls");
			string imie, nazwisko;
			cout << "------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                 REJESTRACJA                                                    -" << endl;
			cout << "-                                         ============================                                           -" << endl;
			cout << "-                                         |                          |                                           -" << endl;
			cout << "-                                         |  Podaj Imie i Nazwisko:  |                                           -" << endl;
			cout << "-                                         |                          |                                           -" << endl;
			cout << "-                                         ============================                                           -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "-                                                                                                                -" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------" << endl;
			cin >> imie >> nazwisko;
			int id = bazaUzytkownikow.dodajUzytkownika(imie, nazwisko, KLIENT);
			system("cls");
			cout << "Uzytkownik pomyslnie dodany. Twoje ID do logowania to: " << id <<endl;
			string dalej;
			cout << "Wpisz q aby kontynuowac" << endl;
			cin >> dalej;
			zarejestrowano = true;
		}
	}
}
