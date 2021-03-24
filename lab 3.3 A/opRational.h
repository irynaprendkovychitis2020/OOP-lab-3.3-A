#pragma once
#include "Rational.h"
class opRational : public Rational
{
public:
	opRational();
	opRational(double a, double b);
	opRational(const opRational& A);
	void SetX(double value) { x = value; };
	void SetY(double value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	bool isEqual(const opRational& A) const;
	double value();
	double div(const opRational& A);
	bool great(const opRational& A) const;
	bool less(const opRational& A) const;
};
