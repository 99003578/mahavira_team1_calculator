#include "unity.h"
#include "division.h"
#include "test_division.h"

void test_division(void)
{
  TEST_ASSERT_EQUAL(2, division(10,5));
  TEST_ASSERT_EQUAL(6, division(36,6));
}

void test_float(void)
{
  TEST_ASSERT_EQUAL(5.54, division(36.6,6.6));
  TEST_ASSERT_EQUAL(4.94, division(25.2,5.1));
}
