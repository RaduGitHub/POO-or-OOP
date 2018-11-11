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
	void afisare();
	int extragere();
	bool staree();
	//~bila();
	//void creare(int i);
	//int check();
	friend class agentie_loto;
};

class agentie_loto {
private:
	int bilet[3][6];
public:
	agentie_loto();
	void selectare(int linie, int coloana, int valoare);
	void afisare();
	int verificare();
	int valoare(int linie, int coloana);
	//~agentie_loto();
};