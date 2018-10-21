#include "strinng.h"


int main() {
	char sir_i[60], sir_c[60];
	int counter = 0;
	bool variabila_bool;

	cout << "Primul sir:";
	cin.getline(sir_i, 60);
	cout << "Al doilea sir:";
	cin.getline(sir_c, 60);

	variabila_bool = cautare(sir_i, sir_c, counter);

	if (variabila_bool == true)
	{
		cout << "Se gaseste de: " << counter << " ori";
	}
	else
	{
		cout << "Nu se gaseste";
	}

	return 0;
}