#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class zar {
private:
	int face;
public:
	zar();
	int random();
	void afisare();
	friend class sef_trib;
};

class sef_trib {
private:
	int candidat[6];
	int membri_trib;
	int voturi_admise;
public:
	sef_trib(int membri, int voturi);
	void votare();
	int verificare();
	int vot_max();
	void votare_2(int c_1, int c_2);
};