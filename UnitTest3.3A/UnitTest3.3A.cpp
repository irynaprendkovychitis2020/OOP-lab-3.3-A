#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 3.3 A/Rational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational A(2, 3);
			int test = A.GetX();
			Assert::AreEqual(test, 2);
		}
	};
}
