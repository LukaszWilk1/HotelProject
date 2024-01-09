#include <exception>
#include <iostream>
using namespace std;

#include "ObslugaRecepcji.h"
#include "PodstawowaObsluga.h"
#include "ZarzadzaniePokojami.h"
#include "Utils.h"

bool hotel_klasowy::ObslugaRecepcji::oplacRezerwacje(int idRezerwacji) {
	system("cls");
	cout << "Oplacono rezerwacje" << endl;
	return true;
}

void hotel_klasowy::ObslugaRecepcji::wyswietlPokoj(int idPokoju) {
	system("cls");
	hotel_klasowy::Pokoj p = zarzadzaniePokojami.getPokoj(idPokoju);
	cout << "Numer pokoju: " << p.numer << endl;
	cout << "Typ pokoju: " << p.typ_pokoju << endl;
	cout << "Czy do sprzatania: " << p.do_sprzatania << endl;
	cout << "Czy zablokowany: " << p.zablokowany << endl;
	cout << "Uwagi: " << "" << p.uwagi << endl;
}

void hotel_klasowy::ObslugaRecepcji::wyswietlWszystkiePokoje() {
	system("cls");
	cout << "Oto wszystkie pokoje" << endl;
	for (auto& p : zarzadzaniePokojami.getPokoje()) {
		cout << "Numer pokoju: " << p.numer << endl;
		cout << "Typ pokoju: " << p.typ_pokoju << endl;
		cout << "Czy do sprzatania: " << p.do_sprzatania << endl;
		cout << "Czy zablokowany: " << p.zablokowany << endl;
		cout << "Uwagi: " << "" << p.uwagi << endl;
		cout << "-----------------------------------------" << endl;
	}
}

bool hotel_klasowy::ObslugaRecepcji::zablokujPokoj(int idPokoju) {
	system("cls");
	hotel_klasowy::Pokoj& p = zarzadzaniePokojami.getPokoj(idPokoju);
	p.zablokowany = true;
	cout << "Pokoj o id: " << p.numer << " pomyslnie zablokowany." << endl;
	zarzadzaniePokojami.zapiszPokoje();
	return true;
}

bool hotel_klasowy::ObslugaRecepcji::zakwateruj(int idRezerwacji) {
	system("cls");
	hotel_klasowy::Rezerwacja p = zarzadzanieRezerwacjami.getRezerwacja(idRezerwacji);
	p.zakwaterowana = true;
	cout << "Zakwaterowano" << endl;
	return true;
}

bool hotel_klasowy::ObslugaRecepcji::wykwateruj(int idRezerwacji) {
	system("cls");
	hotel_klasowy::Rezerwacja p = zarzadzanieRezerwacjami.getRezerwacja(idRezerwacji);
	p.zakwaterowana = false;
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
		cout << "-                                  |            10. Zakwateruj            |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  |            11. Wykwateruj            |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  |          12. Odblokuj pokoj          |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  |             13. Zakoncz              |                                      -" << endl;
		cout << "-                                  |                                      |                                      -" << endl;
		cout << "-                                  ========================================                                      -" << endl;
		cout << "-                                                                                                                -" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------" << endl;

		int opcja = 0;
		cin >> opcja;

		while (opcja != 1 && opcja != 2 && opcja != 3 && opcja != 4 && opcja != 5 && opcja != 6 && opcja != 7 && opcja != 8 && opcja != 9 && opcja != 10 && opcja != 11 && opcja != 12 && opcja != 13) {
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
			cout << "-                                  |             13. Zakoncz              |                                      -" << endl;
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
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 2:
			wyswietlWszstkieRezerwacje();
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 3:
			cout << "Podaj ID rezerwacji do anulowania: ";
			int idAnulowania;
			cin >> idAnulowania;
			anulujRezerwacje(idAnulowania);
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 4:
			cout << "Podaj ID rezerwacji do wyswietlenia: ";
			int idWyswietlenia;
			cin >> idWyswietlenia;
			wyswietlRezerwacje(idWyswietlenia);
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 5:
			cout << "Podaj ID rezerwacji do zmiany terminu: ";
			int idZmianyTerminu;
			cin >> idZmianyTerminu;
			zmienTerminRezerwacji(idZmianyTerminu);
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 6:
			cout << "Podaj ID rezerwacji do oplacenia: ";
			int idDoOplacenia;
			cin >> idDoOplacenia;
			oplacRezerwacje(idDoOplacenia);
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 7:
			cout << "Podaj ID pokoju do wyswietlenia: ";
			int idPokoju;
			cin >> idPokoju;
			wyswietlPokoj(idPokoju);
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 8:
			wyswietlWszystkiePokoje();
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 9:
			cout << "Podaj ID pokoju do zablokowania: ";
			int idZablokowania;
			cin >> idZablokowania;
			zablokujPokoj(idZablokowania);
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 10:
			cout << "Podaj ID pokoju do zakwaterowania: ";
			int idZawkaterowania;
			cin >> idZawkaterowania;
			zakwateruj(idZawkaterowania);
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 11:
			cout << "Podaj ID pokoju do wykwaterowania: ";
			int idWykwaterowania;
			cin >> idWykwaterowania;
			wykwateruj(idWykwaterowania);
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 12:
			cout << "Podaj ID pokoju do odblokowania: ";
			int id2;
			cin >> id2;
			odblokujPokoj(id2);
			cout << "Wpisz dowolny znak (poza q) aby wrocic: ";
			cin >> exit;
			break;
		case 13:
			exit = "q";
			break;
		}
	} while (exit != "Q" && exit != "q");
}

void hotel_klasowy::ObslugaRecepcji::dodajRezerwacje() {
	string dataOd, dataDo;
	system("cls");
	cout << "Podaj poczatek pobytu (dd-mm-yyyy): " << endl;
	cin >> dataOd;
	cout << "Podaj koniec pobytu (dd-mm-yyyy): " << endl;
	cin >> dataDo;
	auto dataOdS = Utils::split(dataOd, "-");
	auto dataDoS = Utils::split(dataDo, "-");
	Data od(stoi(dataOdS[0]), stoi(dataOdS[1]), stoi(dataOdS[2]));
	Data DO(stoi(dataDoS[0]), stoi(dataDoS[1]), stoi(dataDoS[2]));
	Termin termin(od, DO);
	cout << "Rodzaje pokoi" << endl;
	vector <hotel_klasowy::OpisPokoju> opisy = zarzadzaniePokojami.getRodzajePokoji();
	for (auto& r : opisy) {
		cout << "Id: " << r.getId() << endl;
		cout << "Nazwa: " << r.getNazwa() << endl;
		cout << "Opis: " << r.getOpis() << endl;
		cout << "Maksymalna ilosc osob: " << r.getMaxOsob() << endl;
		cout << "Cena za dobe: " << r.getCenaZaDobe() << endl;
		cout << "-----------------------------------------" << endl;
	}
	cout << "Podaj rodzaj pokoju: " << endl;
	int typ;
	cin >> typ;
	int idRezerwacji = zarzadzanieRezerwacjami.dodajRezerwacje(osoba, termin, typ);
	if (idRezerwacji == -1) cout << "Nie udalo sie zarezerwowac w danym terminie." << endl;
	else cout << "Pomyslnie zarezerwowano pobyt. Twoja rezerwacja ma id: " << idRezerwacji << endl;
}

void hotel_klasowy::ObslugaRecepcji::wyswietlWszstkieRezerwacje() {
	system("cls");
	cout << "Rezerwacje:" << endl;
	for (auto& rez : zarzadzanieRezerwacjami.getWszystkieRezerwacje()) {
		cout << "Nr. rezerwacji: " << rez.getId() << "; Nr. klienta: " << rez.getIdKlienta() << "; Od: " << rez.terminPobytu.odDnia << "; Do: " << rez.terminPobytu.doDnia << "\n";
	}
}

void hotel_klasowy::ObslugaRecepcji::anulujRezerwacje(int idRezerwacji)
{
	system("cls");
	bool czyAnulowano = zarzadzanieRezerwacjami.anulujRezerwacje(idRezerwacji);
	if (!czyAnulowano) cout << "Nie udalo sie anulowac rezerwacji" << endl;
	else cout << "Rezerwacja anulowana pomyslnie" << endl;
}

void hotel_klasowy::ObslugaRecepcji::wyswietlRezerwacje(int idRezerwacji) {
	system("cls");
	cout << "Wyswietlenie rezerwacji" << endl;
	hotel_klasowy::Rezerwacja rez = zarzadzanieRezerwacjami.getRezerwacja(idRezerwacji);
	cout << "Nr. rezerwacji: " << rez.getId() << "; Od: " << rez.terminPobytu.odDnia << "; Do: " << rez.terminPobytu.doDnia << "\n";
}

bool hotel_klasowy::ObslugaRecepcji::zmienTerminRezerwacji(int idRezerwacji) {
	system("cls");
	string dataOd, dataDo;
	system("cls");
	cout << "Podaj poczatek pobytu (dd-mm-yyyy): " << endl;
	cin >> dataOd;
	cout << "Podaj koniec pobytu (dd-mm-yyyy): " << endl;
	cin >> dataDo;
	auto dataOdS = Utils::split(dataOd, "-");
	auto dataDoS = Utils::split(dataDo, "-");
	Data od(stoi(dataOdS[0]), stoi(dataOdS[1]), stoi(dataOdS[2]));
	Data DO(stoi(dataDoS[0]), stoi(dataDoS[1]), stoi(dataDoS[2]));
	Termin termin(od, DO);
	int czyZmieniono = zarzadzanieRezerwacjami.zmienTerminRezerwacji(idRezerwacji, termin);
	if (czyZmieniono == -1) cout << "Nie udalo sie zmienic terminu rezerwacji" << endl;
	else cout << "Pomyslnie zmieniono termin rezerwacji." << endl;
	return false;
}

void hotel_klasowy::ObslugaRecepcji::anulujRezerwacje(string idRezerwacji)
{
}

