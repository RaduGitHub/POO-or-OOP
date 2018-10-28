#include "bile.h"

lotto::lotto()
	: bile()
{}

int lotto::random() {
	return rand() % 49 + 1;
}

void lotto::tragere() {
	int i = 0;
	srand(time(NULL));
	while (i < 6) {
		bila = random();
		if (bile[bila] == 0) {
			i++;
			bile[bila] = 1;
			cout <<"i="<< i << endl;
		}
		cout << bila << "  " << endl;
	}
}

void lotto::print() {
	for (int i = 0; i < 49; i++) {
		cout << bile[i] << " ";
	}
}

void lotto::nr_corecte(int v[]) {
	int i;
	int counter = 0;
	for (i = 0; i < 6; i++) {
		if (bile[v[i]] == 1) {
			counter++;
		}
	}
	cout << endl;
	cout << "nr nimerite: " << counter;
}