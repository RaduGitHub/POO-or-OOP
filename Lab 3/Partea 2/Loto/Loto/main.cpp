#include "bila.h"

//int bila::numar = 0;

int main() {

	bila bile[49];
	int i;
	for (i = 0; i < 49; i++) {
		bile[i].creare(i);
	}
	
	int numere[6];
	for (i = 0; i < 6; i++) {
		cout << "Introduceti numarul dorit" << endl;
		cin >> numere[i];
	}

	//generare bile castigatoare
	srand(time(NULL));
	i = 0;
	int zealot;
	while (i < 6) {
		zealot = rand() % 49;
		i += bile[zealot].extragere();
		bile[zealot].afisare();
	}

	//verificare bile castigatoare
	int counter = 0;
	for (i = 0; i < 6; i++) {
		if (bile[numere[i] - 1].check() == 0) {
			counter++;
		}
	}

	cout << "counter = " << counter;
/*	for (i = 0; i < 6; i++) {
		bile[numere[i] - 1].afisare();
	}*/
}