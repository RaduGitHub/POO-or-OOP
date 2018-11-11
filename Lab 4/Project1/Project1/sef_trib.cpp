#include "sef_trib.h"

sef_trib::sef_trib(int membri, int voturi)
	: candidat()
{
	membri_trib = membri;
	voturi_admise = voturi;
}

void sef_trib::votare() {
	zar slave;
	int i = 0;
	int slave_0;

	while (i < membri_trib*voturi_admise) {
		slave_0 = slave.random();
		candidat[slave_0]++;
		i++;
	}
}

int sef_trib::verificare() {
	int max = 0;
	int sef;
	for (int i = 0; i < 6; i++) {
		if (candidat[i] > max) {
			max = candidat[i];
			sef = i;
		}
	}
	if (max > (membri_trib*voturi_admise) / 2) {
		return sef;
	}
	else {
		return 6;
	}
}

int sef_trib::vot_max() {
	int max = 0;
	int max_it;
	for (int i = 0; i < 6; i++) {
		if (candidat[i] > max) {
			max = candidat[i];
			max_it = i;
		}
	}
	candidat[max_it] = 0;
	return max_it;
}

void sef_trib::votare_2(int c_1, int c_2) {
	zar slave;
	int i = 0;
	int slave_1;

	while (i < membri_trib*voturi_admise) {
		slave_1 = slave.random();
		if (slave_1 == c_1) {
			i++;
			candidat[c_1]++;
		}
		else if (slave_1 == c_2) {
			i++;
			candidat[c_2]++;
		}
	}
}