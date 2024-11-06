#include "pch.h"
#include "CppUnitTest.h"
//#include "../lab_9_2_2/lab_9_2_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


// Оновлений макрос для квадрату
#define SQR(p) ((p)*(p))

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(test_square_macro)
        {
            int x = 8;
            int expected = 64; // Очікуваний результат 8^2 = 64
            int result = SQR(x); // Використовуємо макрос для обчислення квадрату

            // Перевіряємо, чи результат співпадає з очікуваним значенням
            Assert::AreEqual(result, expected);
        }
    };
}