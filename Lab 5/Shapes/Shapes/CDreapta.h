#ifndef CDREAPTA_H
#define CDREAPTA_H

#include<iostream>
#include"CPunct.h"
#include"CForma.h"

using namespace std;

class CDreapta : public CForma {
protected:
	CPunct p1;
	CPunct p2;
	double distanta;
public:
	CDreapta();
	void calcul_distanta();
	virtual void print_shape_name() const {cout << "Dreapta: "; }
	virtual void print() ;
};

#endif