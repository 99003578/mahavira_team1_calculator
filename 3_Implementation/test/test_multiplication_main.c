include "unity.h"
#include "multiplication.h"
#include "test_multiplication.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test frmework */
void tearDown(){}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_multiplication);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_zero_negative);
  RUN_TEST(test_decimal);



  /* Close the Unity Test Framework */
  return UNITY_END();
}
