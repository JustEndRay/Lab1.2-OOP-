#include "pch.h"
#include "CppUnitTest.h"
#include "../Triangle.h"
#include "../Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle a;
			a.Init(6.0, 6.0, 6.0, 60, 60, 60);
			double result = a.Perimeter();
			Assert::AreEqual(result, 18.0);
		}
	};
}
