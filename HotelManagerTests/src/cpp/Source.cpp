#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTest
{
	TEST_CLASS(UnitTestTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a = 5;
			Assert::AreEqual(a, 5);
		}
	};
}