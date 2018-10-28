#include "elevi.h"

int main()
{
	int i;
	int n;
	cout << "Numar de elevi: ";
	cin >> n;

	elevi *grupa = new elevi[n];

	ifstream grupa1("grupa1.txt");

	for (i = 0; i < n; i++)
	{
		citire(grupa[i], grupa1);
	}

	grupa1.close();

	afisare(grupa[0]);
	cout << endl;
	afisare(grupa[1]);

	delete[] grupa;
}