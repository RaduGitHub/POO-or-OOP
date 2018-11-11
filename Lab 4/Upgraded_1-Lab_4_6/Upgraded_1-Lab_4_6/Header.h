#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class zar {
private:
	int face;
public:
	zar();
	void random();
	void afisare();
	friend class aparitii;
};

class sef_trib {
private:
	int candidat;

};