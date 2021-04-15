#include "unity.h"
#include "dtmanip.h"

/* Modify these two lines according to the project */
#include "dtmanip.h"
#define PROJECT_NAME    "Calendar"

/* Prototypes for all the test functions */
void test_Adddays(void);
void test_Addmonth(void);
void test_Addyear(void);
void test_Cmpdate(void);
void test_Datefmt(void);
void test_Diffdays(void);
void test_Diffymd(void);
void test_Julian(void);
void test_Leap(void);
void test_Subdays(void);
void test_Submonth(void);
void test_Subyear(void);
void test_Valid(void);
void test_Weekdays(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Adddays);
  RUN_TEST(test_Addmonth);
  RUN_TEST(test_Addyear);
  RUN_TEST(test_Cmpdate);
  RUN_TEST(test_Datefmt);
  RUN_TEST(test_Diffdays);
  RUN_TEST(test_Julian);
  RUN_TEST(test_Leap);
  RUN_TEST(test_Subdays);
  RUN_TEST(test_Submonth);
  RUN_TEST(test_Subyear);
  RUN_TEST(test_Valid);
  RUN_TEST(test_Weekdays);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(24/03/2021, Adddays(12/03/2021, 12));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, Addmonth(7500, 7500));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}
