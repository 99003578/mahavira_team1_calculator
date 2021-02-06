include "unity.h"
#include "addition.h"
#include "test_addition.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  RUN_TEST(test_zero_negative);
  RUN_TEST(test_float);
  RUN_TEST(test_large);



  /* Close the Unity Test Framework */
  return UNITY_END();
}
