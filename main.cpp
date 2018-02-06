#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string.h>
#include "KsiazkaAdresowa.h"
#include "Kontakt.h"

using namespace std;

int main() {
	int wybor;
	int numerIdZalogowanegoUsera = 0;

	string loginWprowadzony;
	vector<Kontakt> osoby;
	vector<Kontakt> osobyWszystkieWpisy;
	vector<Login> loginy;
	Login login;
	KsiazkaAdresowa ksiazka;

	while (true) {

		cout << endl;
		cout << "1.Logowanie" << endl << endl;
		cout << "2.Rejestracja" << endl << endl;
		cout << "3.Zamknij program" << endl << endl;

		cin >> wybor;

		switch (wybor) {

		case 1:

			ksiazka.logowanie(loginy, osoby, login, numerIdZalogowanegoUsera,
					osobyWszystkieWpisy);

			break;
		case 2:
			ksiazka.rejestracja(loginy, osoby, login, loginWprowadzony);

			break;
		case 3:
			exit(0);

		}
	}
}
