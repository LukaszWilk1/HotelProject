#include <exception>
#include <iostream>
using namespace std;

#include "ObslugaRecepcji.h"
#include "PodstawowaObsluga.h"
#include "ZarzadzaniePokojami.h"

bool hotel_klasowy::ObslugaRecepcji::oplacRezerwacje(int idRezerwacji) {
	system("cls");
	cout << "Oplacono rezerwacje" << endl;
	return true;
}

void hotel_klasowy::ObslugaRecepcji::wyswietlPokoj(int idPokoju) {
	system("cls");
	hotel_klasowy::Pokoj p = zarzadzaniePokojami.getPokoj(idPokoju);
	cout << "Oto pokoj" << endl;
	cout << p.numer << endl;
	cout <<p.typ_pokoju<< endl;
	cout <<p.uwagi<< endl;
	cout << p.do_sprzatania << endl;
	cout << p.zablokowany << endl;
}

void hotel_klasowy::ObslugaRecepcji::wyswietlWszystkiePokoje() {
	system("cls");
	cout << "Oto wszystkie pokoje" << endl;
	for (auto& p : zarzadzaniePokojami.getPokoje()) {
		cout << "Nr pokoju: " << p.numer << endl;
	}
}

bool hotel_klasowy::ObslugaRecepcji::zablokujPokoj(int idPokoju) {
	system("cls");
	cout << "Zablokowano pokoj" << endl;
	hotel_klasowy::Pokoj p = zarzadzaniePokojami.getPokoj(idPokoju);
	p.zablokowany = true;
	cout << "Pokoj o id: " << p.numer << " pomyslnie zablokowany." << endl;
	zarzadzaniePokojami.zapiszPokoje();
	return true;
}

bool hotel_klasowy::ObslugaRecepcji::zakwateruj(int idRezerwacji) {
	system("cls");
	cout << "Zakwaterowano" << endl;
	return true;
}

bool hotel_klasowy::ObslugaRecepcji::wykwateruj(int idRezerwacji) {
	system("cls");
	cout << "Wykwaterowano" << endl;
	return true;
}

void hotel_klasowy::ObslugaRecepcji::odblokujPokoj(int idPokoju) {
	system("cls");
	zarzadzaniePokojami.getPokoj(idPokoju).zablokowany = false;
	zarzadzaniePokojami.zapiszPokoje();
	cout << "Pokoj odblokowano" << endl;
}

void hotel_klasowy::ObslugaRecepcji::interfejs() {
	string exit;
	do {
		system("cls");
		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "-                                                                                                    " << osoba.imie << " " << osoba.nazwisko << " - " << endl;
		cout << "-                                  Jestes zalogowany/a jako Recepcjonista/ka                                   " << osoba.id << " -" << endl;
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
		cout << "-                                  |         6. Oplac rezerwacje          |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  |          7. Wyswietl pokoj           |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  |     8. Wyswietl wszystkie pokoje     |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  |          9. Zablokoj pokoj           |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  |           10. Zakwateruj             |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  |           11. Wykwateruj             |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  |         12. Odblokuj pokoj           |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  ========================================                                      -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------" << endl;

		int opcja = 0;
		cin >> opcja;

		while (opcja != 1 && opcja != 2 && opcja != 3 && opcja != 4 && opcja != 5 && opcja != 6 && opcja != 7 && opcja != 8 && opcja != 9 && opcja != 10 && opcja != 11 && opcja != 12) {
			system("cls");
			cout << "------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "-                                                                                                    " << osoba.imie << " " << osoba.nazwisko << " - " << endl;
			cout << "-                                  Jestes zalogowany/a jako Recepcjonista/ka                                   " << osoba.id << " -" << endl;
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
			cout << "-                                  |         6. Oplac rezerwacje          |                                      -" << endl;
			cout << "-                                  |                                      |                                      -" << endl;
			cout << "-                                  |          7. Wyswietl pokoj           |                                      -" << endl;
			cout << "-                                  |                                      |                                      -" << endl;
			cout << "-                                  |     8. Wyswietl wszystkie pokoje     |                                      -" << endl;
			cout << "-                                  |                                      |                                      -" << endl;
			cout << "-                                  |          9. Zablokoj pokoj           |                                      -" << endl;
			cout << "-                                  |                                      |                                      -" << endl;
			cout << "-                                  |           10. Zakwateruj             |                                      -" << endl;
			cout << "-                                  |                                      |                                      -" << endl;
			cout << "-                                  |           11. Wykwateruj             |                                      -" << endl;
			cout << "-                                  |                                      |                                      -" << endl;
			cout << "-                                  |         12. Odblokuj pokoj           |                                      -" << endl;
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
			anulujRezerwacje(4);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 4:
			wyswietlRezerwacje(4);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 5:
			zmienTerminRezerwacji(4);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 6:
			oplacRezerwacje(4);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 7:
			wyswietlPokoj(4);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 8:
			wyswietlWszystkiePokoje();
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 9:
			zablokujPokoj(2);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 10:
			zakwateruj(4);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 11:
			wykwateruj(4);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		case 12:
			odblokujPokoj(2);
			cout << "Wpisz q aby wyjsc lub cokolwiek innego aby wrocic do listy opcji: ";
			cin >> exit;
			break;
		}
	} while (exit != "Q" && exit != "q");
}

void hotel_klasowy::ObslugaRecepcji::dodajRezerwacje() {
	system("cls");
	cout << "Dodano rezerwacje" << endl;
}

void hotel_klasowy::ObslugaRecepcji::wyswietlWszstkieRezerwacje() {
	system("cls");
	cout << "Wyswietlono wszystkie rezerwacje" << endl;
}

void hotel_klasowy::ObslugaRecepcji::anulujRezerwacje(int idRezerwacji)
{
	system("cls");
	cout << "Anulowano rezerwacje" << endl;
}

void hotel_klasowy::ObslugaRecepcji::wyswietlRezerwacje(int idRezerwacji) {
	system("cls");
	cout << "Wyswietlono rezerwacje" << endl;
}

bool hotel_klasowy::ObslugaRecepcji::zmienTerminRezerwacji(int idRezerwacji) {
	system("cls");
	cout << "Zmiana terminu rezerwacji" << endl;
	return true;
}

void hotel_klasowy::ObslugaRecepcji::anulujRezerwacje(string idRezerwacji)
{
}

