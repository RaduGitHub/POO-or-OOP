#include "sef_trib.h"

zar::zar() {
	face = 0;
}

int zar::random() {
	return rand() % 6 + 1;
}

void zar::afisare() {
	cout << face << "  ";
}
