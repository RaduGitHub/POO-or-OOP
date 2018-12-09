#pragma once
#ifndef CARTE_TEL_H_
#define CARTE_TEL_H_


#include<math.h>
#include<string>
#include "abonat.h"
using namespace std;

class carte
{
public:
	void cauta(string nm);
	void adauga(int nr, string nm, string adr);
private:
	abonat a[10];
	int nr = 0;
};

#endif // !CARTE_TEL_H_