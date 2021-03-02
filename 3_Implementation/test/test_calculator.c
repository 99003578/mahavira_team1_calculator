#include "unity.h"
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"

#include "calculate_power.h"
#include "factorial.h"
#include "square.h"
#include "prime.h"


void test_addition(void);
void test_zero_negative(void);
void test_float(void);
void test_large(void);

void test_subtraction(void);
void test_zero_sub(void);
void test_negative_sub(void);

void test_multiplication(void);
void test_zero_mul(void);
void test_zero_negative_mul(void);
void test_decimal(void);

void test_division(void);
void test_float_div(void);

void test_prime(void);
void test_zero_one(void);
void test_negative(void);

void test_calculate_power(void);
void test_zero_pow(void);

void test_factorial(void);
void test_zero_fact(void);

void test_square(void);
void test_zero_squ(void);
void test_negative_squ(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_prime);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  RUN_TEST(test_addition);
  RUN_TEST(test_zero_negative);
  RUN_TEST(test_float);
  RUN_TEST(test_large);

  RUN_TEST(test_subtraction);
  RUN_TEST(test_zero_sub);
  RUN_TEST(test_negative_sub);

  RUN_TEST(test_multiplication);
  RUN_TEST(test_zero_mul);
  RUN_TEST(test_zero_mul);
  RUN_TEST(test_decimal);

  RUN_TEST(test_division);
  RUN_TEST(test_float);

  RUN_TEST(test_calculate_power);
  RUN_TEST(test_zero_pow);

  RUN_TEST(test_factorial);
  RUN_TEST(test_zero_fact);

  RUN_TEST(test_square);
  RUN_TEST(test_zero_squ);
  RUN_TEST(test_negative_squ);


  /* Close the Unity Test Framework */
  return UNITY_END();
}


void test_prime(void)
{
  TEST_ASSERT_EQUAL(1, prime(3));
  TEST_ASSERT_EQUAL(1, prime(5));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(0, prime(0));
  //TEST_ASSERT_EQUAL(1, prime());
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(2, prime(4));
  TEST_ASSERT_EQUAL(2, prime(8));
}


//
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
    TEST_ASSERT_EQUAL(0,addition(32790,3));
}



void test_subtraction(void)
{
  TEST_ASSERT_EQUAL(2, subtraction(5,3));
  TEST_ASSERT_EQUAL(5, subtraction(7,2));
}
void test_zero_sub(void)
{
  TEST_ASSERT_EQUAL(0,subtraction(1, 1));
  //TEST_ASSERT_EQUAL(1, prime());
}
void test_negative_sub(void)
{
  TEST_ASSERT_EQUAL(2, subtraction(6,3));
  TEST_ASSERT_EQUAL(5, subtraction(8,4));
}


//
void test_multiplication(void)
{
    TEST_ASSERT_EQUAL(12, multiplication(2,6));
    TEST_ASSERT_EQUAL(242, multiplication(22,11));
}
void test_zero_mul(void)
{
  TEST_ASSERT_EQUAL(0, multiplication(0,1));
    TEST_ASSERT_EQUAL(0, multiplication(98,0));
}  
void test_negative_mul(void)
{
    TEST_ASSERT_EQUAL(-10, multiplication(-5,2));
    TEST_ASSERT_EQUAL(242, multiplication(-10,-5));
}
void test_decimal(void)
{
    TEST_ASSERT_EQUAL(-10, multiplication(-5,2));
    TEST_ASSERT_EQUAL(242, multiplication(-10,-5));
}


void test_division(void)
{
  TEST_ASSERT_EQUAL(2, division(10,5));
  TEST_ASSERT_EQUAL(6, division(36,6));
}

void test_float_div(void)
{
  TEST_ASSERT_EQUAL(5.54, division(36.6,6.6));
  TEST_ASSERT_EQUAL(4.94, division(25.2,5.1));
}


void test_calculate_power(void)
{
  TEST_ASSERT_EQUAL(91, calculate_power(9,2));
  TEST_ASSERT_EQUAL(1000, calculate_power(10,3));
}
void test_zero_pow(void)
{
  TEST_ASSERT_EQUAL(1, calculate_power(2, 0));

}


void test_factorial(void)
{
  TEST_ASSERT_EQUAL(120, factorial(5));
  TEST_ASSERT_EQUAL(5040, factorial(7));
}
void test_zero_fact(void)
{
  TEST_ASSERT_EQUAL(0, factorial(0));

}


void test_square(void)
{
    TEST_ASSERT_EQUAL(2, square(4));
    TEST_ASSERT_EQUAL(5, square(25));
}
void test_zero_squ(void)
{
  TEST_ASSERT_EQUAL(0, square(32));
  TEST_ASSERT_EQUAL(1, square(100));
}  
void test_negative_squ(void)
{
    TEST_ASSERT_EQUAL(-10, square(60));
    TEST_ASSERT_EQUAL(242, square(-45));
}