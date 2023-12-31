#include "pch.h"
#include "CppUnitTest.h"
#include "../Kolok2.1/Factorial.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Factorial factorial;
            factorial.setN(3);
            std::vector<long long> testVector;
            factorial.calculateFactorials();
            testVector.push_back(1);
            testVector.push_back(2);
            testVector.push_back(6);
            Assert::IsTrue(factorial.getAnswers() ==  testVector);
		}

        TEST_METHOD(TestMethod2)
        {
            Factorial factorial;
            factorial.setN(6);
            std::vector<long long> testVector;
            factorial.calculateFactorials();
            testVector.push_back(1);
            testVector.push_back(2);
            testVector.push_back(6);
            testVector.push_back(24);
            testVector.push_back(120);
            testVector.push_back(720);
            Assert::IsTrue(factorial.getAnswers() == testVector);
        }
        TEST_METHOD(TestMethod3)
        {
            Factorial factorial;
            factorial.setN(8);
            std::vector<long long> testVector;
            factorial.calculateFactorials();
            testVector.push_back(1);
            testVector.push_back(2);
            testVector.push_back(6);
            testVector.push_back(24);
            testVector.push_back(120);
            testVector.push_back(720);
            testVector.push_back(5040);
            testVector.push_back(40320);
           
            Assert::IsTrue(factorial.getAnswers() == testVector);
        }
	};
}
