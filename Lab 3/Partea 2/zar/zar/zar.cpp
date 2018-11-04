#include "zar.h"

zar::zar() {
	face = 0;
}

void zar::random() {
	face = rand() % 6 + 1;
}

void zar::afisare() {
	cout << face << "  ";
}
