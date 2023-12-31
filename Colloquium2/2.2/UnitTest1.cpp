#include "pch.h"
#include "CppUnitTest.h"
#include "../Kolok2.2/Kunteynir.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            kunteynir kunteynir;
            const std::vector<long long> v1 = {3,4,5,6,7,8,3,4};
            const std::vector<long long> v2 = {3,4,5,6,7,8};
            kunteynir.set_vector(v1);
            kunteynir.find_same();
            Assert::IsTrue(kunteynir.get_result() == v2);
		}
        TEST_METHOD(TestMethod2)
        {
            kunteynir kunteynir;
            const std::vector<long long> v1 = { 3,4,5,6,7,8,3,4,6,7,89,6 };
            const std::vector<long long> v2 = { 3,4,5,6,7,8,89 };
            kunteynir.set_vector(v1);
            kunteynir.find_same();
            Assert::IsTrue(kunteynir.get_result() == v2);
        }
   
	};
}
