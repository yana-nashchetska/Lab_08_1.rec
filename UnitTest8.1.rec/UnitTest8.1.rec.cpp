#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1.rec/Lab_08_1.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rec
{
	TEST_CLASS(UnitTest81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char rjadok[] = "nlo";
			int k = 1;
			int t = Count(rjadok, 1);
			Assert::AreEqual(k, t);
		}
	};
}
