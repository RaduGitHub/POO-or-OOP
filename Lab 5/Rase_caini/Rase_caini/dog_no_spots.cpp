#include "dog_spots.h"
#include "dog.h"
#include "dog_no_spots.h"
#include <string>



dog_no_spots::dog_no_spots()
	:dog()
{}

void dog_no_spots::set_dog_no_spots(string name_main, float height_main, float weight_main, int age_main, string color_main) {
	dog::set_dog(name_main, height_main, weight_main, age_main, color_main);
}

void dog_no_spots::print_dog_no_spots() {
	dog::print_dog();
}