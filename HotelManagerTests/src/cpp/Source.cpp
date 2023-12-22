#include "pch.h"
#include "CppUnitTest.h"
#include "Utils.cpp"
#include <iostream>
#include <format>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTest
{
	TEST_CLASS(UnitTestTest)
	{
	public:

		TEST_METHOD(StringSplit)
		{
			auto sp = hotel_klasowy::Utils::split("a;b;c", ";");
			std::vector<std::string> expected = { "a", "b", "c" };
			Assert::IsTrue(expected == sp);
		}
	};
}