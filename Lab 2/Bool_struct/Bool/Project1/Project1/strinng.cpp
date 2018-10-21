#include "strinng.h"

bool cautare(char sir1[], char sir2[], int &counter) 
{
	char *p = strstr(sir1,sir2);
	while (p)
	{
		counter++;
		p = strstr(p + 1,sir2);
	}
	if (counter > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}