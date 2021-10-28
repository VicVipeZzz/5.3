#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x = 0;
			int t;
			t = cos(x) + 1;
			Assert::AreEqual(t, 2);
		}
	};
}
