#include "dog_spots.h"
#include "dog.h"
#include "dog_no_spots.h"
#include <string>



void dog::set_dog(string name_main, float height_main, float weight_main, int age_main, string color_main) {
	dog::name = name_main;
	dog::height = height_main;
	dog::weight = weight_main;
	dog::age = age_main;
	dog::color = color_main;
}

void dog::print_dog() {
	cout << "Name: " << name << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Age: " << age << endl;
	cout << "Color: " << color << endl;
}