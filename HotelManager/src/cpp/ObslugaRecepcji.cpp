#include <exception>
#include <iostream>
using namespace std;

#include "ObslugaRecepcji.h"
#include "PodstawowaObsluga.h"

bool hotel_klasowy::ObslugaRecepcji::oplacRezerwacje(int idRezerwacji) {
	throw "Not yet implemented";
}

void hotel_klasowy::ObslugaRecepcji::wyswietlPokoj(int idPokoju) {
	throw "Not yet implemented";
}

void hotel_klasowy::ObslugaRecepcji::wyswietlWszystkiePokoje() {
	throw "Not yet implemented";
}

bool hotel_klasowy::ObslugaRecepcji::zablokujPokoj(string idPokoju) {
	throw "Not yet implemented";
}

bool hotel_klasowy::ObslugaRecepcji::zakwateruj(int idRezerwacji) {
	throw "Not yet implemented";
}

bool hotel_klasowy::ObslugaRecepcji::wykwateruj(int idRezerwacji) {
	throw "Not yet implemented";
}

void hotel_klasowy::ObslugaRecepcji::odblokujPokoj(int idPokoju) {
	throw "Not yet implemented";
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
	cout << "-                                  ========================================                                      -" << endl;
	cout << "-                                                                                                                -" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------" << endl;
}

void hotel_klasowy::ObslugaRecepcji::dodajRezerwacje() {
	throw "Not yet implemented";
}

void hotel_klasowy::ObslugaRecepcji::wyswietlWszstkieRezerwacje() {
	throw "Not yet implemented";
}

void hotel_klasowy::ObslugaRecepcji::anulujRezerwacje(int idRezerwacji)
{
}

void hotel_klasowy::ObslugaRecepcji::wyswietlRezerwacje(int idRezerwacji) {
	throw "Not yet implemented";
}

bool hotel_klasowy::ObslugaRecepcji::zmienTerminRezerwacji(int idRezerwacji) {
	throw "Not yet implemented";
}

