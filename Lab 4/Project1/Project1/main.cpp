#include "sef_trib.h"

int main() {
	int membri, voturi;

	srand(time(NULL));

	cout << "Numar membri trib: ";
	cin >> membri;
	cout << "Numar voturi admise: ";
	cin >> voturi;

	sef_trib alegere(membri, voturi);

	alegere.votare();

	int majoritar; // Candidat ales
	majoritar = alegere.verificare();
	if (majoritar != 6) {
		cout << "Candidatul castigator este " << majoritar + 1;
	}
	else {
		int candidat_1, candidat_2;
		candidat_1 = alegere.vot_max();
		candidat_2 = alegere.vot_max();
		alegere.votare_2(candidat_1, candidat_2);
		majoritar = alegere.verificare();
		cout << "Candidatul castigator este " << majoritar + 1;
	}

	return 0;
}