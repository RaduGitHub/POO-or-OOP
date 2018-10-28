#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class dice {
	private:
		int face_1, face_2;
	public:
		int aruncare();
		void generate(int n, int *a, int rows, int cols);
		void ap_max(int matrice[][6]);
		void ap_cons(int n, int *a, int rows, int cols);
		void ap_min(int matrice[][6]);
		void frecventa(int n, int v[]);
		void print();
};
/*
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
	int i_max=0, j_max=0;
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
	cout << "max: " << i_max + 1 << "  " << j_max + 1<<endl;
}

void dice::ap_min(int matrice[][6]) {
	int i, j;
	int i_min=0, j_min=0;
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
	cout << "min: " << i_min + 1 << "  " << j_min + 1<<endl;
}

void dice::print() {
	cout << face_1 << "  " << face_2;
}

void dice::ap_cons() {
	int i;

	for (i = 0; i < 9000; i++) {
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
}*/