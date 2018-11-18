#include "dog.h"
#include "dog_spots.h"
#include "dog_no_spots.h"

using namespace std;

int main() {

	dog_spots caine;
	dog_no_spots caine2;
	dog caine3;

	caine.set_dog_spots("lucy",1,80,6,"albastyu",172);
	caine2.set_dog_no_spots("rez",3,200,7,"negro");
	caine3.set_dog("miguel",7,199,2,"whiterino");

	caine.print_dog_spots();
	caine2.print_dog_no_spots();
	caine3.print_dog();






	return 0;
}