#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			int rowCount = 9;
			int colCount = 6;
			int S = 0;
			int k = 0;
			int** p = new int* [rowCount];
			z = Calc(p, 9, 6, S, k);
			Assert::AreEqual(z, 235, 22);
		}
	};
}
