#include "incDecRational.h"
incDecRational::incDecRational()
{
	x = 0;
	y = 0;
}
incDecRational::incDecRational(double a, double b)
{
	x = a;
	y = b;
}
incDecRational::incDecRational(const incDecRational& A)
{
	x = A.x;
	y = A.y;
}
incDecRational& incDecRational::operator --()
{
	--x;
	return *this;
}
incDecRational& incDecRational::operator ++()
{
	++x;
	return *this;
}
incDecRational incDecRational::operator --(int)
{
	incDecRational tmp(*this);
	--y;
	return tmp;
}
incDecRational incDecRational::operator ++(int)
{
	incDecRational tmp(*this);
	++x;
	return tmp;
}