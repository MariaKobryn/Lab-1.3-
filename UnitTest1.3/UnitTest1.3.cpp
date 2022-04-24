#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab(1.3)/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong m;
			m.Init(4, 8);
			int test = m.Add();
			Assert::AreEqual(12, test);

		}
	};
}
