#include "pch.h"
#include "CppUnitTest.h"
#include "Utils.cpp"
#include <iostream>
#include "fmt/core.h"

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
			Logger::WriteMessage(fmt::format("{} -> {}", sp.size(), sp[0]).c_str());
			Assert::IsTrue(expected == sp);
		}
	};
}