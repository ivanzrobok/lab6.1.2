#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1.2recurs/lab6.1.2recurs.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab612recurstest
{
	TEST_CLASS(lab612recurstest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int p[23]{1,7,3};
			t = sum(p, 23,0,0);
			Assert::AreEqual(t, 11);
		}
	};
}
