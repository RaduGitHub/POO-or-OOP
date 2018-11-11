#include "bila.h"

bila::bila() {
	stare = true;
	numar = numarator;
	numarator++;
}

void bila::afisare() {
	cout << numar << " ";
	cout << stare << endl;
}

int bila::extragere() {
	if (stare == true) {
		stare = false;
		return 1;
	}
	else {
		return 0;
	}
}

bool bila::staree() {
	return stare;
}