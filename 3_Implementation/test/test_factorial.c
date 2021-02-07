#include "unity.h"
#include "factorial.h"
#include "test_factorial.h"

void test_factorial(void)
{
  TEST_ASSERT_EQUAL(120, factorial(5));
  TEST_ASSERT_EQUAL(5040, factorial(7));
}
void test_zero(void)
{
  TEST_ASSERT_EQUAL(0, calculate_power(0));

}
