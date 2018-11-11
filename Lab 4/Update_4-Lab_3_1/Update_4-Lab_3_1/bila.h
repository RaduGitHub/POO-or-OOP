#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<fstream>

using namespace std;

class bila {
private:
	bool stare;
	int numar;
	static int numarator;
public:
	bila();
	//~bila();
	void afisare();
	//void creare(int i);
	int extragere();
	bool staree();
	//int check();
	friend class agentie_loto;
};

class agentie_loto {
private:
	int bilet[3][6];
public:
	agentie_loto();
	//~agentie_loto();
	void selectare(int linie, int coloana, int valoare);
	void afisare();
	int verificare();
	int valoare(int linie, int coloana);
};