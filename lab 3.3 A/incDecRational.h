#pragma once
#include "opRational.h"
class incDecRational : public opRational
{
public:
	incDecRational();
	incDecRational(double a, double b);
	incDecRational(const incDecRational& A);
	incDecRational& operator --();
	incDecRational& operator ++();
	incDecRational operator --(int);
	incDecRational operator ++(int);
};