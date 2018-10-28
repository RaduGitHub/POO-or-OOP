#include "bile.h"

int main() {
	lotto vasile;
	int v[6] = { 0 };
	int i;

	cout << "Alegerile:" << endl;
	
	for (i = 0; i < 6; i++) {
		cout << "Alegerea cu numarul " << i + 1 << " este: ";
		cin >> v[i];
	}
	vasile.tragere();
	vasile.print();
	vasile.nr_corecte(v);
	return 0;
}