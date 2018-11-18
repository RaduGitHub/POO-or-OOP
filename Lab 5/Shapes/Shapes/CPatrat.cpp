#include"CPatrat.h"
#include "CPunct.h"

CPatrat::CPatrat(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	punct1.set_CPunct(x1, y1);
	punct2.set_CPunct(x2, y2); 
	punct3.set_CPunct(x3, y3);
	punct4.set_CPunct(x4, y4);
}

double CPatrat::area(int x1, int y1, int x2, int y2) const{
	latura = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	return (latura*latura) / 2;
}

double CPatrat::perimeter(int x1, int y1, int x2, int y2) const{
	return 4 * latura;
}