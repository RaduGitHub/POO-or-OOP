#pragma once
#include<iostream>

using namespace std;

class numar
{
public:
	numar() {
		head = nullptr;
		tail = nullptr;
	}
	~numar() {}
	void add_num(int val);
	void afisare();
	void sterge(int val);
	void eliminare(int val);
	float medie();

private:
	struct node{
		float val;
		node *next;
	};
	node *head, *tail;
};