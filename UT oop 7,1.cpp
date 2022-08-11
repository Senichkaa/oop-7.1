#include "pch.h"
#include "CppUnitTest.h"
#include "../oop 7.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UToop71
{
	TEST_CLASS(UToop71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> a = { 3, 5, 23, 10, 84 };
			auto min = *std::min_element(a.begin(), a.end(), myfn);
			Assert::AreEqual(min, 3);
		}
	};
}
