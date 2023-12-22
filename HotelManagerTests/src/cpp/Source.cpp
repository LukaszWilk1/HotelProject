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
		TEST_METHOD(Test) {
			Logger::WriteMessage("Test log");
			Assert::IsTrue(true);
		}

		TEST_METHOD(StringSplit)
		{
			auto sp = hotel_klasowy::Utils::split("a;b;c", ";");
			std::vector<std::string> expected = { "a", "b", "c" };
			Logger::WriteMessage(fmt::format("Size: {}\n", sp.size()).c_str());
			for (auto& s : sp) {
				Logger::WriteMessage(fmt::format("{}\n",s).c_str());
			}
			Assert::AreEqual(expected.size(), sp.size());
			Assert::IsTrue(expected == sp);
		}

		TEST_METHOD(StringSplitLonger)
		{
			auto sp = hotel_klasowy::Utils::split("Anna;;-Maciek a;;- Franek;", ";;-");
			std::vector<std::string> expected = { "Anna", "Maciek a", " Franek;" };
			Logger::WriteMessage(fmt::format("Size: {}\n", sp.size()).c_str());
			for (auto& s : sp) {
				Logger::WriteMessage(fmt::format("{}\n", s).c_str());
			}
			Assert::AreEqual(expected.size(), sp.size());
			Assert::IsTrue(expected == sp);
		}

		TEST_METHOD(StringSplitNotSplit)
		{
			auto sp = hotel_klasowy::Utils::split("Ola ma kota", "%");
			std::vector<std::string> expected = { "Ola ma kota" };
			Logger::WriteMessage(fmt::format("Size: {}\n", sp.size()).c_str());
			for (auto& s : sp) {
				Logger::WriteMessage(fmt::format("{}\n", s).c_str());
			}
			Assert::AreEqual(expected.size(), sp.size());
			Assert::IsTrue(expected == sp);
		}
	};
}