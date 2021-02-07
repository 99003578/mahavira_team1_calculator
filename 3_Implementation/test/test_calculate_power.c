#include "unity.h"
#include "calculate_power.h"
#include "test_calculate_power.h"

void test_calculate_power(void)
{
  TEST_ASSERT_EQUAL(91, calculate_power(9,2));
  TEST_ASSERT_EQUAL(1000, calculate_power(10,3));
}
void test_zero(void)
{
  TEST_ASSERT_EQUAL(1, calculate_power(2, 0));

}
