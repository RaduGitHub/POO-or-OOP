#ifndef DOG_SPOTS_H
#define DOG_SPOTS_H
#include "dog.h"

using namespace std;

class dog_spots : public dog {
protected:
	int NO_spots;
public:
	//dog_spots(string name_main, float height_main, float weight_main, int age_main, string color_name, int NO_spots_main);
	dog_spots();
	void set_dog_spots(string name_main, float height_main, float weight_main, int age_main, string color_name, int NO_spots_main);
	void print_dog_spots();
};

#endif