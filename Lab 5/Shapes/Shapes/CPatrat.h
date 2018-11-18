#ifndef CPATRAT_H
#define CPATRAT_H

#include <iostream>
#include "CDreapta.h"
#include "CForma.h"
#include "CPunct.h"

using namespace std;

class CPatrat : public CForma {
protected:
	CPunct punct1, punct2, punct3, punct4;
	const double latura;
public:
	CPatrat(int, int, int, int, int, int, int, int);
	virtual double area(int x1, int y1, int x2, int y2) const;
	virtual double perimeter(int x1, int y1, int x2, int y2) const;
	virtual void print_shape_name() const { cout << "Patrat: "; }
	//virtual void print() const;
};

#endif
