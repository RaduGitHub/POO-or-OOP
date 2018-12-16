#pragma once
#include <iostream>


class complex
{
public:
	complex(float = 0, float = 0);
	complex(const complex& z1);
	~complex();

	void print();
	complex& operator=(const complex& z1); //Asign operator
	friend complex operator+(const complex& z1, const complex& z2); //Add operator
	friend complex operator-(const complex& z1, const complex& z2); //Substact operator
	friend complex operator*(const complex& z1, const complex& z2); //Multiply operator
	friend complex operator/(const complex& z1, const complex& z2); //Divide operator
	friend float operator~(const complex& z1); //Absolute operator
	friend complex operator^(const complex& z1, int);
	/*complex& operator+(const complex& z1) {
		real = real + z1.real;
		imaginary = imaginary + z1.imaginary;
		return *this;
	}*/
	/*complex& operator-(const complex& z1) {
		real = real - z1.get_real();
		imaginary = imaginary - z1.imaginary;
		return *this;
	}*/
	//float get_real() const;
	//float get_imaginary();
private:
	float real, imaginary;

};

