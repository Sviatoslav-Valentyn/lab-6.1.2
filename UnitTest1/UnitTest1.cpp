#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab 6.1.2\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int A[5] = { 2, 2, -5, 3, 5 };
			int t = CountElementArray(A, 5, 0);
			Assert::AreEqual(4, t);
		}
	};
}