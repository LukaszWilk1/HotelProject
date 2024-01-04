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
	hotel_klasowy::ZarzadzaniePokojami z;
	hotel_klasowy::Pokoj p = z.getPokoj(idPokoju);
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
}

bool hotel_klasowy::ObslugaRecepcji::zablokujPokoj(int idPokoju) {
	system("cls");
	cout << "Zablokowano pokoj" << endl;
	hotel_klasowy::ZarzadzaniePokojami z;
	hotel_klasowy::Pokoj p = z.getPokoj(idPokoju);
	p.zablokowany = true;
	cout << "Pokoj o id: " << p.numer << " pomyslnie zablokowany." << endl;
	z.zapiszPokoje();
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
	cout << "Pokoj odblokowano" << endl;
}

void hotel_klasowy::ObslugaRecepcji::interfejs(Osoba osoba) {
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
		break;
	case 2:
		wyswietlWszstkieRezerwacje();
		break;
	case 3:
		anulujRezerwacje(4);
		break;
	case 4:
		wyswietlRezerwacje(4);
		break;
	case 5:
		zmienTerminRezerwacji(4);
		break;
	case 6:
		oplacRezerwacje(4);
		break;
	case 7:
		wyswietlPokoj(4);
		break;
	case 8:
		wyswietlWszystkiePokoje();
		break;
	case 9:
		zablokujPokoj(4);
		break;
	case 10:
		zakwateruj(4);
		break;
	case 11:
		wykwateruj(4);
		break;
	case 12:
		odblokujPokoj(4);
		break;
	}

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

