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
	hotel_klasowy::Osoba uzytkownik = bazaUzytkownikow.getUzytkownik(5);
	hotel_klasowy::TypKonta typKonta = uzytkownik.typ_konta;

	if (typKonta == KLIENT) {
		hotel_klasowy::ObslugaKlienta obslugaKlienta(uzytkownik);
		obslugaKlienta.interfejs();
	}
	else if (typKonta == RECEPCJA) {
		hotel_klasowy::ObslugaRecepcji obslugaRecepcji(uzytkownik);
		obslugaRecepcji.interfejs();
	}
	else if (typKonta == SPRZATACZKA) {
		hotel_klasowy::ObslugaSprzataczki obslugaSprzataczki(uzytkownik);
		obslugaSprzataczki.interfejs();
	}
}
