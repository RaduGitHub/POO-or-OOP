#include "bila.h"

agentie_loto::agentie_loto()
	: bilet()
{

}

//void agentie_loto::generate() {
//
//}

void agentie_loto::selectare(int linie, int coloana, int valoare) {
	bilet[linie][coloana] = valoare;
}

void agentie_loto::afisare() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			cout << bilet[i][j] << " ";
		}
		cout << endl;
	}
}

int agentie_loto::valoare(int linie, int coloana) {
	return bilet[linie][coloana];
}