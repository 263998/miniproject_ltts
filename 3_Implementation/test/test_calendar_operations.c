#include "unity.h"
#include "dtmanip.h"

/* Modify these two lines according to the project */
#include "dtmanip.h"
#define PROJECT_NAME    "Calendar"

/* Prototypes for all the test functions */
void test_Adddays(void);
void test_Addmonth(void);
void test_Addyear(void);
void test_Diffdays(void);
void test_Subdays(void);
void test_Submonth(void);
void test_Subyear(void);


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
  RUN_TEST(test_Diffdays);
  RUN_TEST(test_Subdays);
  RUN_TEST(test_Submonth);
  RUN_TEST(test_Subyear);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_Adddays(void) {
  TEST_ASSERT_EQUAL(24/03/2021, Adddays(12/03/2021, 12));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(21/01/2020, Adddays(11/01/2020, 10));
}
void test_Addmonth(void) {
  TEST_ASSERT_EQUAL(12/06/2021, Addmonth(12/03/2021, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10/01/2012, Addmonth(10/10/2011, 3));
}


void test_Addyear(void) {
  TEST_ASSERT_EQUAL(01/01/2022, Addyear(01/01/2020, 2));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(100, Addyear(1000, 3));
}

void test_Diffdays(void) {
  TEST_ASSERT_EQUAL(61, Diffdays(10/04/2021, 10/06/2021));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, Diffdays(2, 2));
}

void test_Subdays(void) {
  TEST_ASSERT_EQUAL(11/12/2020, Subdays(10/04/2021, 120));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, Subdays(2, 2));
}
void test_Submonth(void) {
  TEST_ASSERT_EQUAL(10/10/2020, Submonth(10/04/2021, 6));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, Submonth(2, 2));
}
void test_Subyear(void) {
  TEST_ASSERT_EQUAL(10/04/2020, Subyear(10/04/2021, 1));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, Subyear(2, 2));
}

