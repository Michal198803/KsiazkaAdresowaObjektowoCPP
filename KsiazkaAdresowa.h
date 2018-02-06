#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string.h>
#include "Kontakt.h"
#include "Login.h"

class KsiazkaAdresowa {

private:
	int wybor;
	int numerIdZalogowanegoUsera = 0;
	int idDoUsuniecia = 0;
	string loginWprowadzony;
	vector<Kontakt> osoby;
	vector<Kontakt> osobyWszystkieWpisy;
	vector<Login> loginy;

public:

	int logowanie(vector<Login>&loginy, vector<Kontakt> osoby, Login login,
			int numerIdZalogowanegoUsera, vector<Kontakt> osobyWszystkieWpisy);

	void rejestracja(vector<Login>&loginy, vector<Kontakt> osoby, Login login,
			string loginWprowadzony);



};

