#include "pch.h"
#include "CppUnitTest.h"
#include "../12.10/12.10.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My1210test
{
	TEST_CLASS(My1210test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int level{};
			Derevo* node{},
				* vood{};

			INF value;
			bool found = false;

			BinarySearchInsert(node, 7, found);
			BinarySearchInsert(node, -1, found);
			BinarySearchInsert(node, 11, found);
			BinarySearchInsert(node, 9, found);

			BalanceHeight(node);

			vood = FindMax(node, level);

			Assert::AreEqual(vood->kluch_d, 11);
		}
	};
}
