#include "unity.h"
#include "square.h"
#include "test_square.h"
void test_multiplication(void)
{
    TEST_ASSERT_EQUAL(2, square(4));
    TEST_ASSERT_EQUAL(5, square(25));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(0, sqaure(32));
    TEST_ASSERT_EQUAL(1, square(100));
}  
void test_negative(void)
{
    TEST_ASSERT_EQUAL(-10, square(60));
    TEST_ASSERT_EQUAL(242, square(-45));
}
void test_decimal(void)
{
    TEST_ASSERT_EQUAL(-10, square(1000));
    TEST_ASSERT_EQUAL(242, square(-147));
}

