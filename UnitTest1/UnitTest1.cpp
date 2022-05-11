#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12.3.2(2)/Lab_12.3.2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* begin1 = NULL,
				* end1 = NULL,
				* begin2 = NULL,
				* end2 = NULL;
			bool result = false;
			int a1[5] = { 1,1,6,3,5 };
			int a2[3] = { 1,2,3 };
			for (int i = 0; i < 5; i++)
			{
				enqueue(end1, begin1, a1[i]);
			}
			for (int i = 0; i < 3; i++)
			{
				enqueue(end2, begin2, a2[i]);
			}
			Assert::AreEqual(AreInElem(begin1, begin2, begin2, result), false);

		}
	};
}
