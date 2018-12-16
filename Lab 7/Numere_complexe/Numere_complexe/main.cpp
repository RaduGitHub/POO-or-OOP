#include "numar_Complex.h"

using namespace std;

int main() {
	complex z1(1); // z1 = 0+0i
	complex z2(5, -1); // z2 = 5+0i 
	complex z3(2, 3); // z3 = 2+3i
	complex z4 ;
	z4 = z2;
	complex z5;
	z5 = ((z1 ^ 3) + (z3 ^ 3)) / ((z2 ^ 4) + (z4 ^ 4));
	/*z1.print();
	z2.print();
	z3.print();
	z4.print();*/

	/*z2 = (z2 ^ 4) + (z4 ^ 4);
	z2.print();*/

	cout << "asd" << endl;
	z5.print();
	return 0;
}