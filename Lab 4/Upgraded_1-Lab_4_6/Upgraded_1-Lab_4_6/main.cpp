#include "zar.h"

int main() {
	aparitii variabila;
	int op;

	int k;

	cout << "1.Maxim aparitii" << endl;
	cout << "2.Minim aparitii" << endl;
	cout << "3.Aparitii consecutive" << endl;
	cout << "4.Frecventa" << endl;
	cin >> op;
	k = op;

	srand(time(NULL));

	switch (op) {
	case 1://maxim aparitii
		variabila.max_min(k);
		break;
	case 2://minim aparitii
		variabila.max_min(k);
		break;
	case 3://aparitii consecutive
		variabila.aparitii_consecutive();
		break;
	case 4://frecventa
		variabila.frecventa();
		variabila.max_min(k);
		break;
	}
	return 0;
}