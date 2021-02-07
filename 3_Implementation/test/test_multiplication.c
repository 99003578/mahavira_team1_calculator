#include "unity.h"
#include "multiplication.h"
#include "test_multiplication.h"
void test_multiplication(void)
{
    TEST_ASSERT_EQUAL(12, multiplication(2,6));
    TEST_ASSERT_EQUAL(242, multiplication(22,11));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(0, multiplication(0,1));
    TEST_ASSERT_EQUAL(0, multiplication(98,0));
}  
void test_negative(void)
{
    TEST_ASSERT_EQUAL(-10, multiplication(-5,2));
    TEST_ASSERT_EQUAL(242, multiplication(-10,-5));
}
void test_decimal(void)
{
    TEST_ASSERT_EQUAL(-10, multiplication(-5,2));
    TEST_ASSERT_EQUAL(242, multiplication(-10,-5));
}

