#include "zaruri.h"

int dice::aruncare() {
	return rand() % 6 + 1;
}

void dice::generate(int n, int *a, int rows, int cols) {
	int i;

	for (i = 0; i < n; i++) {
		face_1 = aruncare();
		face_2 = aruncare();
		if (face_1 == face_2) {
			(*(a + (face_1 - 1) * cols + (face_2 - 1)))++;
		}
		else {
			(*(a + (face_1 - 1) * cols + (face_2 - 1)))++;
			(*(a + (face_2 - 1) * cols + (face_1 - 1)))++;
		}
		cout << face_1 << "   " << face_2 << endl;
	}
}

void dice::ap_max(int matrice[][6]) {
	int i, j;
	int i_max = 0, j_max = 0;
	int max = matrice[0][0];
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (max < matrice[i][j]) {
				max = matrice[i][j];
				i_max = i;
				j_max = j;
			}
		}
	}
	cout << "max: " << i_max + 1 << "  " << j_max + 1 << endl;
}

void dice::ap_min(int matrice[][6]) {
	int i, j;
	int i_min = 0, j_min = 0;
	int min = matrice[0][0];
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (min > matrice[i][j]) {
				min = matrice[i][j];
				i_min = i;
				j_min = j;
			}
		}
	}
	cout << "min: " << i_min + 1 << "  " << j_min + 1 << endl;
}

void dice::print() {
	cout << face_1 << "  " << face_2 << endl;
}

void dice::ap_cons(int n, int *a, int rows, int cols) {
	int i;
	int p1 = aruncare();
	int p2 = aruncare();
	int icm = 0, jcm = 0;
	//int v1;
	int counter_1 = 0;
	int counter_2 = 0;
	for (i = 0; i < n; i++) {
		face_1 = aruncare();
		face_2 = aruncare();
		if (face_1 == face_2) {
			(*(a + (face_1 - 1) * cols + (face_2 - 1)))++;
		}
		else {
			(*(a + (face_1 - 1) * cols + (face_2 - 1)))++;
			(*(a + (face_2 - 1) * cols + (face_1 - 1)))++;
		}
		if (face_1 == p1 && face_2 == p2) {
			counter_1++;
		}
		else if (face_1 == p2 && face_2 == p1) {
			counter_1++;
		}
		else if (counter_1 > counter_2) {
			icm = p1;
			jcm = p2;
			p1 = face_1;
			p2 = face_2;
			counter_2 = counter_1;
			counter_1 = 0;
			//v1 = i;
		}
		else {
			p1 = face_1;
			p2 = face_2;
			counter_1 = 0;
		}
		cout <<i<<"  "<< face_1 << "   " << face_2 << endl;
	}
	//cout << v1 <<" ap cons max: "<<counter_2 + 1<<endl;
	cout << "perechea: " << icm << "  " << jcm<<endl;
}

void dice::frecventa(int n, int v[]) {
	int i;
	for (i = 0; i < n; i++) {
		face_1 = aruncare();
		face_2 = aruncare();
		v[face_1 - 1]++;
		v[face_2 - 1]++;
	}
	for (i = 0; i < 6; i++) {
		cout << i + 1 << " apare de " << v[i] << " ori" << endl;
	}
}