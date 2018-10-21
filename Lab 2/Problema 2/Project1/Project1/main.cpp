#include "elevi.h"



int main()
{
	int i;
	int n;

	cout << "Numar de elevi: ";
	cin >> n;

	elevi *grupa = new elevi[n];

	for (i = 0; i < n; i++)
	{
		citire(grupa[i]);
	}

	afisare(grupa[0]);
	cout << endl;
	afisare(grupa[1]);
}