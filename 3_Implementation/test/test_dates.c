#include "unity.h"
#include "dates.h"
#include "test_dates.h"
void test_validity()
{
    TEST_ASSERT_EQUAL(1,validity(12,02,2020));
    TEST_ASSERT_EQUAL(0,validity(00,02,2020));
    TEST_ASSERT_EQUAL(0,validity(30,02,2020));
    TEST_ASSERT_EQUAL(0,validity(12,13,2020));
    TEST_ASSERT_EQUAL(1,validity(29,02,2020));

}
void test_leap()
{
    TEST_ASSERT_EQUAL(1,leapyear(2020));
    TEST_ASSERT_EQUAL(0,leapyear(2021));
}