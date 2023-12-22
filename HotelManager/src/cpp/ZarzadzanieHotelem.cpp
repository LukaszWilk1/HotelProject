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
	int typKonta = uzytkownik.getTypKonta();

	if (typKonta == 0) {
		hotel_klasowy::ObslugaKlienta obslugaKlienta(uzytkownik);
		obslugaKlienta.interfejs();
	}
	else if (typKonta == 1) {
		hotel_klasowy::ObslugaRecepcji obslugaRecepcji(uzytkownik);
		obslugaRecepcji.interfejs();
	}
	else if (typKonta == 2) {
		hotel_klasowy::ObslugaSprzataczki obslugaSprzataczki(uzytkownik);
		obslugaSprzataczki.interfejs();
	}
}
