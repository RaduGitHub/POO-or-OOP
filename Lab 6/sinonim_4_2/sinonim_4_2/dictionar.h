#pragma once
#ifndef _DICTIONAR_H_
#define _DICTIONAR_H_

//#include<iostream>
#include<string>
#include<vector>
#include"cuvant.h"

using namespace std;

class dictionar {
public:
	//dictionar();
	void adaug_cuvant(string s);
	void adaug_sinonime(string s, int n);
	void afisare();
	void afisare_sinonime(int n);
	void swap(int m, int n);
	void check();
private:
	cuvant cuv[10];
	static int nr_cuvinte;
};

#endif 
