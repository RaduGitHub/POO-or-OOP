#include"dictionar.h"
#include"cuvant.h"
#include<string>
#include<vector>

using namespace std;

int dictionar::nr_cuvinte = 0;

int main() {

	dictionar dex;

	dex.adaug_cuvant("asd");
	dex.adaug_cuvant("nfgs");
	dex.adaug_cuvant("fgns");
	dex.adaug_cuvant("gas");
	dex.adaug_cuvant("gasd");
	dex.afisare();
	


	int op;
	
	string s;
	int poz;



	do {
		cout << "1.Adauga cuvant" << endl;
		cout << "2.Adauga sinonim" << endl;
		cout << "3.Afisati sinonimele" << endl;
		cout << "4.Iesire meniu" << endl;
		cin >> op;

		system("CLS");

		switch (op) {
		case 1:
			cout << "Cuvantul: ";
			cin >> s;
			dex.adaug_cuvant(s);
			cout << endl;
			break;
		case 2:
			dex.afisare();
			cout << "Pozitia cuvantului: ";
			cin >> poz;
			cout <<"\n"<< "Sinonimul: ";
			cin >> s;
			dex.adaug_sinonime(s, poz);
			break;
		case 3:
			dex.afisare_sinonime(1);
			break;
		}
		system("PAUSE");
		system("CLS");
	} while (op != 4);
	
	dex.swap(1, 2);
	dex.afisare();
	dex.afisare_sinonime(1);

	return 0;
}