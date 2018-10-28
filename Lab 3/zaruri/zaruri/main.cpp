#include "zaruri.h"

int main() {
	dice zar;
	int n;
	int i, j;
	int sum = 0;
//	int zar_1, zar_2;
	int matrice[6][6] = { 0 };
//	int r, c;
	int o;
	int frcv[6] = { 0 };

	cout << "aruncari:"<< endl;
	cin >> n;
	cout << "optiune:  " << endl;
	cin >> o;
	srand(time(NULL));
	switch (o) {
	case 1: 
		zar.generate(n, matrice[0], 6, 6);
		zar.ap_max(matrice);
		break;
	case 2:
		zar.ap_cons(n, matrice[0], 6, 6);
		break;
	case 3:
		zar.generate(n, matrice[0], 6, 6);
		zar.ap_min(matrice);
		break;
	case 4:
		zar.frecventa(n, frcv);
		break;
	case 5:
		zar.print();
		break;
	}
	

	/*for (i = 0; i < n; i++) {
		c = zar.aruncare();
		r = zar.aruncare();
		if (c == r) {
			matrice[c][r]++;
		}
		else {
			matrice[c][r]++;
			matrice[r][c]++;
		}
		cout << r << "   " << c << endl;
	}

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			cout << matrice[i][j] << "  ";
			sum = sum + matrice[i][j];
		}
		cout << endl;
	}
	cout << sum;
	*/
	return 0;
}
