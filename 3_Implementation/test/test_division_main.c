include "unity.h"
#include "division.h"
#include "test_division.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_division);
  RUN_TEST(test_float);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}