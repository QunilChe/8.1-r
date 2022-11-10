#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1-r/8.1-r.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[20] = "Goodbye world";
			int t = Count(str, 0);
			Assert::AreEqual(t, 0);

		}
	};
}
