#include "unity.h"
#include "calculate_power.h"
#include "test_calculate_power.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calculate_power);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
