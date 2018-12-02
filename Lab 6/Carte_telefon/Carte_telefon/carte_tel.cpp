#include"carte_tel.h"

#include<math.h>
#include<string>

void carte::adauga(int nr, string nm, string adr){
	this->nr++;
	cout << "Am adaugat abonatul al " << this->nr << "-lea cu numarul " << nr << " ,numele " << nm << " si adresa " << adr << '\n';
	a[this->nr].add_abonat(nr, nm, adr);
}

void carte::cauta(string nm){
	for (int i = 1; i <= nr; i++)
		a[i].caut_nume(nm);
}