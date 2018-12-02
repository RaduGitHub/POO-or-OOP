#include"carte_tel.h"
#include"abonat.h"
#include<math.h>
#include<string>

int main() {
	carte book;
	book.adauga(1, "Alex", "Craiova");
	book.adauga(2, "Gigi", "DJ");
	book.adauga(3, "Wasdasd", "Venus");
	book.adauga(5, "X", "Olanda");
	book.cauta("Alex");
	book.cauta("Wasdasd");
	book.cauta("X");
	return 0;
}