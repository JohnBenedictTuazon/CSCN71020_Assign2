#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	int setLength(int input, int length);
	int setWidth(int input, int width);
	int getPerimeter(int length, int width);
	int getArea(int length, int width);
	void printWelcomeMenu();
	void printOptions();
	int getIntInput(char message[]); 
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRECUnitTest
{
	TEST_CLASS(BCSRECUnitTest)
	{
	public:
		
		TEST_METHOD(PerimeterFunctionTest)
		{
			int result = 0;
			result = getPerimeter(3, 4);
			Assert::AreEqual(14, result);
		}
		TEST_METHOD(AreaFunctionTest)
		{
			int result = 0;
			result = getArea(5, 9);
			Assert::AreEqual(45, result);
		}
		TEST_METHOD(LengthFunctionTest1)
		{
			int result = 0;
			result = setLength(3, 3);
			Assert::AreEqual(3, result);
		}
		TEST_METHOD(LengthFunctionTest2)
		{
			int result = 0;
			result = setLength(0, 0);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(LengthFunctionTest3)
		{
			int result = 0;
			result = setLength(-7, -7);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(WidthFunctionTest1)
		{
			int result = 0;
			result = setWidth(9, 9);
			Assert::AreEqual(9, result);
		}
		TEST_METHOD(WidthFunctionTest2)
		{
			int result = 0;
			result = setWidth(-6, -6);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(WidthFunctionTest3)
		{
			int result = 0;
			result = setWidth(0, 0);
			Assert::AreEqual(1, result);
		}
	};
}
