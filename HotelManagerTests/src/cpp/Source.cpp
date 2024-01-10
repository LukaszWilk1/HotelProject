#include <filesystem>
#include "pch.h"
#include "CppUnitTest.h"
#include "Utils.cpp"
#include "fmt/core.h"
#include "BazaUzytkownikow.cpp"
#include "TypyKont.h"
#include "Data.cpp"

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

		TEST_METHOD(StringSplitEmpty)
		{
			auto sp = hotel_klasowy::Utils::split("", "%");
			std::vector<std::string> expected = { "" };
			Logger::WriteMessage(fmt::format("Size: {}\n", sp.size()).c_str());
			for (auto& s : sp) {
				Logger::WriteMessage(fmt::format("{}\n", s).c_str());
			}
			Assert::AreEqual(expected.size(), sp.size());
			Assert::IsTrue(expected == sp);
		}

		TEST_METHOD(StringSplitOnlyDeli)
		{
			auto sp = hotel_klasowy::Utils::split("%", "%");
			std::vector<std::string> expected = { "", "" };
			Logger::WriteMessage(fmt::format("Size: {}\n", sp.size()).c_str());
			for (auto& s : sp) {
				Logger::WriteMessage(fmt::format("{}\n", s).c_str());
			}
			Logger::WriteMessage(DATA_FOLDER("aaa"));
			Assert::AreEqual(expected.size(), sp.size());
			Assert::IsTrue(expected == sp);
		}

		TEST_METHOD(ZapisywanieBazyUzytkownikow)
		{
			hotel_klasowy::BazaUzytkownikow b;
			int id = b.dodajUzytkownika("Maria", "Wojtas", hotel_klasowy::KLIENT);
			hotel_klasowy::BazaUzytkownikow b2;
			auto u = b2.getUzytkownik(id);
			Assert::IsTrue(u.id == id);
			Assert::IsTrue(u.imie == "Maria");
			Assert::IsTrue(u.nazwisko == "Wojtas");
			Assert::IsTrue(u.typKonta == hotel_klasowy::KLIENT);
		}

		TEST_METHOD(DodawanieUzytkownikow)
		{
			hotel_klasowy::BazaUzytkownikow b;
			int id = b.dodajUzytkownika("Maria", "Wojtas", hotel_klasowy::KLIENT);
			auto u = b.getUzytkownik(id);
			Assert::IsTrue(u.id == id);
			Assert::IsTrue(u.imie == "Maria");
			Assert::IsTrue(u.nazwisko == "Wojtas");
			Assert::IsTrue(u.typKonta == hotel_klasowy::KLIENT);
		}

		TEST_METHOD(TestDoTworzeniaDaty)
		{
			hotel_klasowy::Data d(6, 1, 2024);
			int dzien = d.getDzien();
			int miesiac = d.getMiesiac();
			int rok = d.getRok();
			Assert::IsTrue(dzien == 6);
			Assert::IsTrue(miesiac == 1);
			Assert::IsTrue(rok == 2024);
		}

		TEST_METHOD(TestRoznicaMiedzyDatami)
		{
			hotel_klasowy::Data d_1(6, 1, 2024);
			hotel_klasowy::Data d_2(9, 1, 2024);
			int roznica = d_2 - d_1;
			Assert::IsTrue(roznica == 3);
		}

		TEST_METHOD(TestSetData)
		{
			hotel_klasowy::Data d(1, 2, 2023);
			d.setDzien(0);
			Assert::AreEqual(1, d.getDzien()); 
		}

		TEST_METHOD(TestRowneDaty)
		{
			hotel_klasowy::Data d_1(6, 1, 2024);
			hotel_klasowy::Data d_2(9, 1, 2024);
			Assert::IsTrue(d_1 == d_2);
		}

	};
}