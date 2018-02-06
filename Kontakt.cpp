#include <iostream>
#include "Kontakt.h"
using namespace std;

int Kontakt::getId() {
	return id;
}
void Kontakt::setId(int id) {
	this->id = id;
}
int Kontakt::getIdUsera() {
	return idUsera;
}
void Kontakt::setIdUsera(int idUsera) {
	this->idUsera = idUsera;
}

string Kontakt::getImie() {
	return imie;

}

void Kontakt::setImie(string imie) {
	this->imie = imie;
}

string Kontakt::getNazwisko() {
	return nazwisko;

}

void Kontakt::setNazwisko(string nazwisko) {
	this->nazwisko = nazwisko;
}
string Kontakt::getAdres() {
	return adres;

}
void Kontakt::setAdres(string adres) {
	this->adres = adres;
}
string Kontakt::getEmail() {
	return email;

}
void Kontakt::setEmail(string email) {
	this->email = email;
}
string Kontakt::getTelefon() {
	return telefon;

}
void Kontakt::setTelefon(string telefon) {
	this->telefon = telefon;
}
