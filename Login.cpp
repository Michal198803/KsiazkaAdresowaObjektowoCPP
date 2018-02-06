#include <iostream>
#include "Login.h"
using namespace std;

string Login::getLogin() {
	return login;

}

void Login::setLogin(string login) {
	this->login = login;
}
string Login::getHaslo() {
	return haslo;

}

void Login::setHaslo(string haslo) {
	this->haslo = haslo;
}

int Login::getIdUsera() {
	return idUsera;

}

void Login::setIdUsera(int idUsera) {
	this->idUsera = idUsera;
}
