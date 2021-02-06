#include "unity.h"
#include "subtraction.h"
#include "test_subtraction.h"

void test_subtraction(void)
{
  TEST_ASSERT_EQUAL(3, subtraction(1));
  TEST_ASSERT_EQUAL(5, subtraction(3));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(0, subtraction(0));
  //TEST_ASSERT_EQUAL(1, prime());
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(2, subtraction(4));
  TEST_ASSERT_EQUAL(5, subtraction(8));
}
