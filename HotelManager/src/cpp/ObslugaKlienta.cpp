#include <exception>
#include <iostream>
#include "Utils.h"
using namespace std;

#include "ObslugaKlienta.h"
#include "Klient.h"
#include <string>
#include "PodstawowaObsluga.h"

void hotel_klasowy::ObslugaKlienta::interfejs() {
	string exit;
	do {
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
		int opcja = 0;
		cin >> opcja;

		while (opcja != 1 && opcja != 2 && opcja != 3 && opcja != 4 && opcja != 5 && opcja != 6) {
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
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 2:
			wyswietlWszstkieRezerwacje();
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 3:
			anulujRezerwacje(2);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 4:
			wyswietlRezerwacje(2);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 5:
			zmienTerminRezerwacji(2);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 6:
			exit = "q";
			break;
		}
	} while (exit != "q" && exit != "Q");
}

void hotel_klasowy::ObslugaKlienta::dodajRezerwacje()
{
	string dataOd,dataDo;
	system("cls");
	cout << "Podaj poczatek pobytu (dd-mm-yyyy): " << endl;
	cin >> dataOd;
	cout << "Podaj koniec pobytu (dd-mm-yyyy): " << endl;
	cin >> dataDo;
	auto dataOdS = Utils::split(dataOd,"-");
	auto dataDoS = Utils::split(dataDo, "-");
	Data od(stoi(dataOdS[0]), stoi(dataOdS[1]), stoi(dataOdS[2]));
	Data DO(stoi(dataDoS[0]), stoi(dataDoS[1]), stoi(dataDoS[2]));
	Termin termin(od, DO);
	cout << "Podaj rodzaj pokoju: " << endl;
	int typ;
	cin >> typ;
	int info = zarzadzanieRezerwacjami.dodajRezerwacje(osoba, termin, typ);
	if (info == -1) cout << "Nie udalo sie zarezerwowac w danym terminie." << endl;
}

void hotel_klasowy::ObslugaKlienta::wyswietlWszstkieRezerwacje()
{
	system("cls");
	cout << "Rezerwacje:" << endl;
	for (auto& rez : zarzadzanieRezerwacjami.getRezerwacjeUzytkownika(osoba.id)) {
		cout << "Nr. rezerwacji: "<<rez.getId() << "; Od: " << rez.terminPobytu.odDnia << "; Do: " << rez.terminPobytu.doDnia <<  "\n";
	}
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

