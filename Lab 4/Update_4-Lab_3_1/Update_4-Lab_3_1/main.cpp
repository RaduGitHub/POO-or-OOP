#include "bila.h"

int bila::numarator = 0;

int main() {

	agentie_loto participant;
	int valoare;

	ifstream bilete("input.txt");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			//cout << "numar pentru biletul " << i + 1;
			bilete >> valoare;
			participant.selectare(i, j, valoare);
		}
	}
	//participant.afisare();

	bila portelan[49];
	srand(time(NULL));
	int i = 0;
	int zealot;
	while (i < 6) {
		zealot = rand() % 49;
		i += portelan[zealot].extragere();
		portelan[zealot].afisare();
	}

	int j;
	for (i = 0; i < 3; i++) {
		int counter = 0;
		for (j = 0; j < 6; j++) {
			zealot = participant.valoare(i, j);
			if (portelan[zealot].staree() == false) {
				counter++;

			}
		}
		if (counter >= 3) {
			cout << "biletul " << i + 1 << " este castigator "<<counter<<endl;
		}
		else {
			cout << "biletul " << i + 1 << " nu este castigator "<<counter<<endl;
		}
	}

	/*for (int i = 0; i < 49; i++) {
		portelan[i].afisare();
	}*/
	
	return 0;
}