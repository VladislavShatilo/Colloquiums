#include "pch.h"
#include "CppUnitTest.h"
#include"../Kolok2.3/MyList.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            my_list my_List;
            my_List.append(1);
            my_List.append(2);
            my_List.append(3);
           
            my_List.reverse();
            my_list my_list2;
            my_list2.append(3);
            my_list2.append(2);
            my_list2.append(1);
            Assert::IsTrue(my_List == my_list2);
           
		}
        TEST_METHOD(TestMethod2)
        {
            my_list mylist;
            mylist.append(1);
            mylist.append(2);
            mylist.append(3);
            mylist.append(7);
            mylist.append(8);


            mylist.reverse();
            my_list mylist2;
            mylist2.append(8);
            mylist2.append(7);
            mylist2.append(3);
            mylist2.append(2);
            mylist2.append(1);
            Assert::IsTrue(mylist == mylist2);

        }
        TEST_METHOD(TestMethod3)
        {
            my_list mylist;
            mylist.append(1);
            mylist.append(2);
            mylist.append(1);
            mylist.append(2);
            mylist.append(3);
            mylist.append(2);
            mylist.append(3);
            mylist.append(3);

            mylist.reverse();
            my_list mylist2;
            mylist2.append(3);
            mylist2.append(3);
            mylist2.append(2);
            mylist2.append(3);
            mylist2.append(2);
            mylist2.append(1);
            mylist2.append(2);
            mylist2.append(1);
           
            Assert::IsTrue(mylist == mylist2);

        }
	};
}
