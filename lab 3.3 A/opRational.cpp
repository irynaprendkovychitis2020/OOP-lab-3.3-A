#include "opRational.h"
opRational::opRational()
{
	x = 0;
	y = 0;
}
opRational::opRational(double a, double b)
{
	x = a;
	y = b;
}
opRational::opRational(const opRational& A)
{
	x = A.x;
	y = A.y;
}
bool opRational::isEqual(const opRational& A) const
{
	if (x == A.x && y == A.y) 
		return true;
	else
		return false;
}
double opRational::value()
{
	return 1. * x / y;
}

double opRational::div(const opRational& A)
{
	double tmp = (x * A.x) / (y * A.y);
	return tmp;
}
bool opRational::great(const opRational& A) const
{

	if ((x * A.y) > (y * A.x))
		return true;
	else
		return false;

}
bool opRational::less(const opRational& A) const
{

	if ((x * A.y) < (y * A.x))
		return true;
	else
		return false;

}