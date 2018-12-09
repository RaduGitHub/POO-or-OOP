#pragma once
#ifndef _CUVANT_H_
#define _CUVANT_H_

#include<iostream>
#include<string>
#include"sinonim.h"


using namespace std;
class dictionar;
class cuvant {
public:
	cuvant() { cuv = "\n"; }
	cuvant(string n) { cuv = n; }
	void afisare_cuvant();
	//~cuvant();
	//string get_cuv_c() { return cuv; }
	/*friend ostream& operator<<(ostream& os, const cuvant& c) {
		os << c.cuv;
		return os;
	}*/
private:
	string cuv;
	//sinonim k;
	//int p = 0;
	friend dictionar;
};

#endif