#ifndef DOG_NO_SPOTS_H
#define DOG_NO_SPOTS_H

#include "dog.h"

using namespace std;

class dog_no_spots: public dog {
public:
	//dog_no_spots(string name, float height, float weight, int age, string color);
	dog_no_spots();
	void set_dog_no_spots(string name_main, float height_main, float weight_main, int age_main, string color_main);
	void print_dog_no_spots();
};

#endif