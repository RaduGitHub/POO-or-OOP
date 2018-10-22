#include "elevi.h"


void citire(elevi &grupa_s, ifstream &grupa1)
{
	int i;
	
	grupa1.getline(grupa_s.nume, 24);
	grupa1.getline(grupa_s.adresa.oras, 16);
	grupa1 >> grupa_s.adresa.cod_oras;
	grupa1.ignore();
	grupa1.getline(grupa_s.adresa.strada,25);
	grupa1 >> grupa_s.adresa.numar;
	grupa1 >> grupa_s.numar_telefon.prefix;
	grupa1 >> grupa_s.numar_telefon.sufix;
	grupa1.ignore();
	grupa1.getline(grupa_s.facultate, 4);
	grupa1 >> grupa_s.varsta;
	for (i = 0; i < 10; i++) {
		grupa1 >> grupa_s.nota[i];
	}
	grupa1 >> grupa_s.medie;
	grupa1 >> grupa_s.absente;
	grupa1.ignore();
}

void afisare(elevi &grupa_s)
{
	int i;

	cout << grupa_s.nume << endl;
	cout << grupa_s.adresa.oras << endl;
	cout << grupa_s.adresa.cod_oras << endl;
	cout << grupa_s.adresa.strada << endl;
	cout << grupa_s.adresa.numar << endl;
	cout << grupa_s.numar_telefon.prefix << endl;
	cout << grupa_s.numar_telefon.sufix << endl;
	cout << grupa_s.facultate << endl;
	cout << grupa_s.varsta << endl;
	for (i = 0; i < 10; i++) {
		cout << grupa_s.nota[i] <<" ";
	}
	cout << endl;
	cout << grupa_s.medie << endl;
	cout << grupa_s.absente << endl;
}