#include<iostream>
#include"cuvant.h"
#include"sinonim.h"
#include"dictionar.h"

using namespace std;

int main() {
	//dictionar dex;

	sinonim asd;

	asd.adaug_sinonim("asd");
	asd.adaug_sinonim("aaa");
	asd.adaug_sinonim("njasd");
	asd.adaug_sinonim("bsdf");
	asd.afisare_sinonime();

	/*cuvant a("txt");

	a.afisare_cuvant();*/

	dictionar b;

	b.adauga_cuvant("mamamia");
	b.afisare();

	return 0;
}