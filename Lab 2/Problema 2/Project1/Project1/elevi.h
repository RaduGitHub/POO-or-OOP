#include <iostream>
#include <string>
#include <string>
#include <string.h>
#include <fstream>

using namespace std;



struct telefon
{
	int prefix;
	unsigned long int sufix;
};

struct adrese
{
	char oras[16];
	int cod_oras;
	char strada[26];
	int numar;
};

typedef struct elv
{
	char nume[26];
	adrese adresa;
	telefon numar_telefon;
	char facultate[4];
	unsigned int varsta;
	float nota[11];
	float medie;
	int absente;
}elevi;

void citire(elevi &grupa_s, ifstream&);
void afisare(elevi &grupa_s);