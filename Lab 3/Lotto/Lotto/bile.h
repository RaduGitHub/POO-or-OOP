#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

class lotto {
private:
	static const int n = 49;
	int bile[n];
	int bila;
public:
	lotto();
	int random();
	void tragere();
	void print();
	void nr_corecte(int v[]);
};