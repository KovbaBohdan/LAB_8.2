#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB82
{
	TEST_CLASS(UnitTest1LAB82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "aaaa bb cccc dd";
			int result = Count(str);
			Assert::AreEqual(4, result);
		}
	};
}
