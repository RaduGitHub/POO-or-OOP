#pragma once
#ifndef _DICTIONAR_H_
#define _DICTIONAR_H_

#include<iostream>
#include<string>
#include"cuvant.h"

using namespace std;
class cuvant;
class dictionar {
public:
	dictionar();
	//~dictionar();
	void adauga_cuvant(string);
	void afisare();
	//string get_cuv();
private:
	list<cuvant*> cuvinte;
};
	
#endif // !_DICTIONAR_H_
