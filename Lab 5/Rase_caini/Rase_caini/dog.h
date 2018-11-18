#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

using namespace std;

class dog {
protected:
	string name;
	float height;
	float weight;
	int age;
	string color;
public:
	dog() {
		name = "\n";
		height = 0;
		weight = 0;
		age = 0;
		color = "\n";
	}
	void set_dog(string name_main, float height_main, float weight_main, int age_main, string color_main);
	void print_dog();
};

#endif