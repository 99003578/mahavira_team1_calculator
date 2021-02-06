#include "unity.h"
#include "addition.h"
#include "test_addition.h"

void test_addition(void)
{
  TEST_ASSERT_EQUAL(68, addition(3,65));
  TEST_ASSERT_EQUAL(9, addition(5,4));
}
void test_zero_negative(void)
{
  TEST_ASSERT_EQUAL(-1, addition(0,-1));
 
}
void test_float(void)
{
  TEST_ASSERT_EQUAL(9, addition(4.5,5.6));
  TEST_ASSERT_EQUAL(11, addition(8.5,3));
}
void test_large(void)
{
    TEST_ASSERT_EQUAL(0,addition(32790,3))
}
