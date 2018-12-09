#pragma once
#ifndef _CUVANT_H_
#define _CUVANT_H_

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
//#include"dictionar.h"

using namespace std;

class dictionar;
class cuvant {
public:
	/*cuvant() { element = "\n"; }
	cuvant(string s) { cuv = s; }*/
	void creare_cuvant(string);
	void adaug_sinonim(string s);
private:
	struct _cuvant {
		string _cuv;
		vector<string> sinonim;
	}element;
	friend dictionar;
};

#endif 
