#ifndef KONTAKT
#define KONTAKT
#include <iostream>

using namespace std;

class Kontakt {

private:
	int id;
	int idUsera;
	string imie;
	string nazwisko;
	string telefon;
	string email;
	string adres;
public:
	int getId();
	void setId(int id);
	int getIdUsera();
	void setIdUsera(int id);
	string getImie();
	void setImie(string imie);
	string getNazwisko();
	void setNazwisko(string nazwisko);
	string getAdres();
	void setAdres(string adres);
	string getTelefon();
	void setTelefon(string telefon);
	string getEmail();
	void setEmail(string email);

};
#endif
