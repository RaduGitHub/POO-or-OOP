#include"cuvant.h"

void cuvant::creare_cuvant(string s) {
	element._cuv = s;
}

void cuvant::adaug_sinonim(string s) {
	element.sinonim.push_back(s);
	sort(element.sinonim.begin(), element.sinonim.end());
	//cout << element.sinonim[0];
	//cout << element.sinonim.last();
}