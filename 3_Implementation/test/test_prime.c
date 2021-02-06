#include "unity.h"
#include "prime.h"
#include "test_prime.h"

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

