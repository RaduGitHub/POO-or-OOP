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

class aparitii {
private:
	int mm_ap[6][6];
	int cons_ap;
	int freq[6];
public:
	aparitii();
	void afisare();
	void max_min(int k);
	void aparitii_consecutive();
	void frecventa();
};