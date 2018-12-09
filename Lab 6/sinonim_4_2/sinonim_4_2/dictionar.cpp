#include"dictionar.h"

void dictionar::adaug_cuvant(string s) {
	cout << "Am adaugat cuvantul: " << s << endl;
	cuv[nr_cuvinte].creare_cuvant(s);
	nr_cuvinte++;
	check();
}

void dictionar::adaug_sinonime(string s, int n) {
	cuv[n].adaug_sinonim(s);
}

void dictionar::afisare() {
	for (int i = 0; i < nr_cuvinte; i++) {
		cout <<i<<". "<< cuv[i].element._cuv<<endl;
	}
}

void dictionar::afisare_sinonime(int n) {
	cout << "Sinonimele pentru cuvantul " << cuv[n].element._cuv << " sunt";
	for (auto it = cuv[n].element.sinonim.begin(); it != cuv[n].element.sinonim.end(); it++) {
		cout << "\n" << *it;
	}
	cout << endl;
}

void dictionar::swap(int m, int n) {
	cuvant c = cuv[m];
	cuv[m] = cuv[n];
	cuv[n] = c;
}

void dictionar::check() {
	for (int i = 0; i < nr_cuvinte; i++) {
		for (int j = i + 1; j < nr_cuvinte; j++) {
			if (cuv[i].element._cuv.compare(cuv[j].element._cuv) > 0) {
				swap(i, j);
			}
		}
	}
}