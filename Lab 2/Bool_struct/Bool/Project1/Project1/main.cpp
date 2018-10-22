#include "strinng.h"


int main() {
	siruri sir_i;
	siruri sir_c;
	int counter = 0;
	bool variabila_bool;

	cout << "Primul sir:";
	cin.getline(sir_i.sir, 60, '\n');
	cout << "Al doilea sir:";
	cin.getline(sir_c.sir, 60, '\n');

	if (strlen(sir_c.sir) > strlen(sir_i.sir)) {
		cout << "Nu se poate cauta";
		return 0;
	}

	variabila_bool = cautare(sir_i.sir, sir_c.sir, counter);

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