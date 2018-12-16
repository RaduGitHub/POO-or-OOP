#include "numar_complex.h"

using namespace std;

//Methods
complex::complex(float r, float i){
	real = r;
	imaginary = i;
}

complex::complex(const complex& z1) {
	real = z1.real;
	imaginary = z1.imaginary;
}

complex::~complex(){

}

void complex::print() {
	if (imaginary > 0) {
		cout << real << " + " << imaginary << "i" << endl;
	}
	else if (imaginary < 0) {
		cout << real <<" "<< imaginary << "i" << endl;
	}
	else {
		cout << real<<endl;
	}
}

//Overloading operators

complex & complex::operator=(const complex& z1) {
	if (this == &z1)
		return *this;
	real = z1.real;
	imaginary = z1.imaginary;
	
	return *this;
}

complex operator+(const complex& z1, const complex& z2) {
	complex z;
	
	z.real = z1.real + z2.real;
	z.imaginary = z1.imaginary + z2.imaginary;
	
	return z;
}

complex operator-(const complex& z1, const complex& z2) {
	complex z;
	
	z.real = z1.real - z2.real;
	z.imaginary = z1.imaginary - z2.imaginary;
	
	return z;
}

complex operator*(const complex& z1, const complex& z2) {
	complex z;
	
	z.real = (z1.real * z2.real) - (z1.imaginary * z2.imaginary);
	z.imaginary = (z1.real * z2.imaginary) + (z1.imaginary * z2.real);
	
	return z;
}

complex operator/(const complex& z1, const complex& z2) {
	complex z;

	z.real = (z1.real*z2.real + z1.imaginary * z2.imaginary) / ((z2.real*z2.real) + (z2.imaginary*z2.imaginary));
	z.imaginary = (z2.real*z1.imaginary - z1.real * z2.imaginary) / ((z2.real*z2.real) + (z2.imaginary*z2.imaginary));

	return z;
}

float operator~(const complex&z1) {
	float modul;
	
	modul = (z1.real*z1.real) + (z1.imaginary*z1.imaginary);
	
	return modul;
}

complex operator^(const complex& z1, int putere) {
	complex z;
	if (putere == 0) {
		z.real = 1;
		return z;
	}
	else {
		z.real = (z1.real * z1.real) - (z1.imaginary * z1.imaginary);
		z.imaginary = (z1.real * z1.imaginary) + (z1.imaginary * z1.real);

		for (int i = 1; i < putere-1; i++) {
			float real = (z.real * z1.real) - (z1.imaginary * z.imaginary);
			float imaginary = (z.real * z1.imaginary) + (z.imaginary * z1.real);
			z.real = real;
			z.imaginary = imaginary;
		}
	}
	return z;
}

//float complex::get_real() const {
//	return this->real;
//}
//
//float complex::get_imaginary() {
//	return this->imaginary;
//}