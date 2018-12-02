#include"struct.h"
#include<iostream>


using namespace std;

int main() {

	numar l;
	int op;
	float medie;
	float n;

	do {
		cout << "1.Adauga numar" << endl;
		cout << "2.Sterge element" << endl;
		cout << "3.Eliminare elemente mai mici" << endl;
		cout << "4.Media aritmetica" << endl;
		cout << "5.Afisare lista" << endl;
		cout << "6.Iesire meniu" << endl;
		cin >> op;

		system("CLS");

		switch (op) {
		case 1:
			cout << "Numarul dorit pentru adaugare: ";
			cin >> n;
			l.add_num(n);
			cout << endl;
			break;
		case 2:
			cout << "Numarul dorit pentru stergere: ";
			cin >> n;
			l.sterge(n);
			cout << endl;
			break;
		case 3:
			cout << "Numarul dorit pentru maxim: ";
			cin >> n;
			l.eliminare(n);
			cout << endl;
			break;
		case 4:
			cout << "Media este:" << endl;
			medie = l.medie();
			cout << medie;
			cout << endl;
			break;
		case 5:
			cout << "Lista este:" << endl;
			l.afisare();
			cout << endl;
			break;
		}
		system("PAUSE");
		system("CLS");
	} while (op != 6);

	return 0;
}