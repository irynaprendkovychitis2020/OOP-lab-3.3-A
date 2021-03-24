#pragma once
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Rational
{
protected:
	double x;
	double y;
public:
	Rational();
	Rational(double a, double b);
	Rational(const Rational& A);
	void SetX(int a) { x = a; };
	void SetY(int a) { y = a; };
	double GetX() { return x; };
	double GetY() { return y; };
	operator string() const;
	friend ostream& operator << (ostream& out, const Rational& A);
	friend istream& operator >> (istream& in, Rational& A);
};