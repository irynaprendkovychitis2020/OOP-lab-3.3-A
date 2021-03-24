#include "Rational.h"
Rational::Rational()
{
	x = 0;
	y = 0;
}
Rational::Rational(double a, double b)
{
	x = a;
	y = b;
}
Rational::Rational(const Rational& A)
{
	x = A.x;
	y = A.y;
}
ostream& operator << (ostream& out, const Rational& A)
{
	return out << "x= " << A.x << "; y= " << A.y << endl;
}
istream& operator >>(istream& in, Rational& A)
{
	cout << "Enter x: "; in >> A.x;
	cout << "Enter y: "; in >> A.y;
	cout << endl;
	return in;
}
Rational::operator string() const
{
	stringstream ss;
	ss << *this;
	return ss.str();
}