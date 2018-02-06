#ifndef LOGIN
#define LOGIN

#include <iostream>
using namespace std;

class Login {

private:
	int idUsera;
	string login;
	string haslo;

public:
	string getLogin();
	void setLogin(string login);
	string getHaslo();
	void setHaslo(string haslo);
	int getIdUsera();
	void setIdUsera(int idUsera);

};
#endif
