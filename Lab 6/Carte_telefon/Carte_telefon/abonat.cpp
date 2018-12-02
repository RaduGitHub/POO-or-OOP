
#include"abonat.h"
#include<math.h>
#include<string>

void abonat::add_abonat(int nr, string nm, string adr){
	el.numar = nr;
	el.nume = nm;
	el.adresa = adr;
}

void abonat::caut_nume(string nm){
	if (nm == el.nume){
		cout << "Numarul de telefon asociat numelui " << nm << " este: " << el.numar << '\n';
	}
}