#pragma once
#ifndef ABONAT_H_
#define ABONAT_H_

#include<string>
#include<math.h>
#include<iostream>
//#include"carte_tel.h"

using namespace std;

class carte;
class abonat
{
public:
	//friend carte;
	void add_abonat(int nr, string nm, string adr);
	void caut_nume(string nm);
private:
	struct abonatul
	{
		int numar;
		string nume;
		string adresa;
	}el;
};
#endif 