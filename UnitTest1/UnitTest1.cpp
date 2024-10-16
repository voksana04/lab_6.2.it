#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_6.2_it\Project_6.2_it\lab_6.2.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCreateArray)
        {
            const int n = 5;
            int arr[n];
            int Low = 1;
            int High = 10;

            CreateArray(arr, n, Low, High);

            for (int i = 0; i < n; i++) {
                Assert::IsTrue(arr[i] >= Low && arr[i] <= High);
            }
        }

        TEST_METHOD(TestMaxIndex)
        {
            const int n = 6;
            int arr[n] = { 3, 10, 2, 5, 8, 1 };

            int expectedIndex = 1; 
            int actualIndex = MaxIndex(arr, n);

            Assert::AreEqual(expectedIndex, actualIndex);
        }

        TEST_METHOD(TestMinIndex)
        {
            const int n = 6;
            int arr[n] = { 3, 10, 2, 5, 8, 1 };

            int expectedIndex = 5; 
            int actualIndex = MinIndex(arr, n);

            Assert::AreEqual(expectedIndex, actualIndex);
        }

        TEST_METHOD(TestSwapMinMax)
        {
            const int n = 5;
            int arr[n] = { 6, 10, 2, 5, 8 }; 

            SwapMinMax(arr, n);

           
            Assert::AreEqual(10, arr[2]); 
            Assert::AreEqual(2, arr[1]);  
        }
    };
}