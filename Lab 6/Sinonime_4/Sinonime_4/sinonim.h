#pragma once
#ifndef _SINONIM_H_
#define _SINONIM_H_

#include<iostream>
#include<string>
#include<list>
#include"dictionar.h"
#include"cuvant.h"

using namespace std;

class cuvant;
class sinonim {
public:
	sinonim();
	void adaug_sinonim(string sin);
	void afisare_sinonime();
	//~sinonim();
private:
	list<string> sinonime;

	/*struct list {
		string sinonimul;
		list *next;
	};
	list *head, *tail;*/
	//friend dictionar;
};

#endif // !_SINONIM_H_
