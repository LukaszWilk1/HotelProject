#include <exception>
#include <iostream>
using namespace std;

#include "ZarzadzanieHotelem.h"
#include "ZarzadzanieRezerwacjami.h"
#include "ZarzadzaniePokojami.h"
#include "BazaUzytkownikow.h"
#include "Osoba.h"

void hotel_klasowy::ZarzadzanieHotelem::start() {
	int id;
	hotel_klasowy::BazaUzytkownikow baza;
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
	hotel_klasowy::Osoba uzytkownik = baza.getUzytkownik(5);
	cout << uzytkownik.typ_konta << endl;
}

