#include "zar.h"

aparitii::aparitii()
	: mm_ap(), freq()
{
	cons_ap = 0;
}

void aparitii::afisare() {
	cout << mm_ap[3][3] << endl;
	cout << mm_ap[3][3] << endl;
	cout << freq[3];
	cout << cons_ap;
}

void aparitii::max_min(int k) {
	zar unu, doi;
	int j, i;
	
	for (i = 0; i < 9000; i++) {
		unu.random();
		doi.random();
		/*cout << unu.face << "  ";
		cout << doi.face << endl;*/
		if (unu.face != doi.face) {
			mm_ap[unu.face - 1][doi.face - 1]++;
			mm_ap[doi.face - 1][unu.face - 1]++;
		}
		else {
			mm_ap[unu.face - 1][doi.face - 1]++;
		}
	}
	if (k == 1) {
		int max = 0;
		int i_max = 0, j_max = 0;
		for (i = 0; i < 6; i++) {
			for (j = 0; j < 6; j++) {
				if (max < mm_ap[i][j]) {
					max = mm_ap[i][j];
					i_max = i + 1;
					j_max = j + 1;
				}
				//cout << mm_ap[i][j] << "  ";
			}
			//cout << endl;
		}
		cout /*<< max */<< i_max << " " << j_max;
	}
	else {
		int min = 9000;
		int i_min=0, j_min=0;
		for (i = 0; i < 6; i++) {
			for (j = 0; j < 6; j++) {
				if (min > mm_ap[i][j]) {
					min = mm_ap[i][j];
					i_min = i + 1;
					j_min = j + 1;
				}
			//	cout << mm_ap[i][j] << "  ";
			}
		//	cout << endl;
		}
		cout /*<< min*/<< i_min << " " << j_min;
	}
}

void aparitii::aparitii_consecutive() {
	zar unu, doi;
	srand(time(NULL));
	int i;
	int counter = 1;
	int counter_max = 1;
	int z1, z2;
	int z1_max = 0, z2_max = 0;
	unu.random();
	doi.random();
	z1 = unu.face;
	z2 = doi.face;
	for (i = 1; i < 9000; i++) {
		unu.random();
		doi.random();
		/*cout << unu.face << "  ";
		cout << doi.face << endl;*/
		if (unu.face == z1 && doi.face == z2 || unu.face == z2 && doi.face == z1) {
			counter++;
		}
		else if (counter > counter_max) {
			counter_max = counter;
			z1_max = z1;
			z2_max = z2;
		}
		else {
			counter = 1;
			z1 = unu.face;
			z2 = doi.face;
		}
		cout << i << " " << unu.face << " " << doi.face << endl;
	}
	cout << z1_max<<" "<<z2_max;
}

void aparitii::frecventa() {
	int i, j;
	int sum[6] = { 0 };
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (j != i) {
				sum[i] += mm_ap[i][j];
			}
			else {
				sum[i] += 2 * mm_ap[i][j];
			}
		}
	}
	cout << endl;
	for (i = 0; i < 6; i++) {
		cout << sum[i]/18000.0 << endl;
	}
}