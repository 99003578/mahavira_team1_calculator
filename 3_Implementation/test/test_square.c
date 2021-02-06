#include "unity.h"
#include "square.h"
#include "test_square.h"

void test_square(void)
{
  TEST_ASSERT_EQUAL(25, square(5));
  TEST_ASSERT_EQUAL(100, square(10));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(0, square(0));
  //TEST_ASSERT_EQUAL(1, square());
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(2, square(4));
  TEST_ASSERT_EQUAL(2, square(8));
}