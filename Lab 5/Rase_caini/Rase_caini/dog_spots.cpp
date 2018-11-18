#include "dog_spots.h"
#include "dog.h"
#include "dog_no_spots.h"
#include <string>


dog_spots::dog_spots()
	:dog()
{
	NO_spots = -1;
}

void dog_spots::set_dog_spots(string name_main, float height_main, float weight_main, int age_main, string color_main, int NO_spots_main) {
	dog::set_dog( name_main, height_main, weight_main, age_main, color_main);
	NO_spots = NO_spots_main;
}

void dog_spots::print_dog_spots() {
	dog::print_dog();
	cout << "Number of spots: " << NO_spots<<endl;
}