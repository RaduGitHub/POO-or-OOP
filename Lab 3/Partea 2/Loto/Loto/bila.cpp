#include"bila.h"

bila::bila() {
	numar = 0;
	stare = true;
}

void bila::creare(int i) {
	numar=i;
}

void bila::afisare() {
	cout << numar << "   " ;
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

int bila::check() {
	if (stare == true) {
		return 1;
	} else {
		return 0;
	}
}