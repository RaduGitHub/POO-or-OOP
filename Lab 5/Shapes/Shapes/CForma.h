#ifndef CFORMA_H
#define CFORMA_H

class CForma {
public:
	virtual double area() const { return 0.0; }
	virtual double perimeter() const { return 0.0; }

	virtual void print_shape_name() const = 0;
	virtual void print() const = 0;
};

#endif