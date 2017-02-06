#pragma once 

#include "MyInt.h"
#include <gtest/gtest.h>

class MyIntTest : public ::testing::Test {};

TEST_F(MyIntTest, ofRandomTest) {
  for (int i=0; i<100; i++) {
    const int r = ofRandom(10);
    ASSERT_LT(r, 10);
  }
}

TEST_F(MyIntTest, IsOddErrorTest) {
  MyInt m(1);
  ASSERT_TRUE(m.isOdd()); // should be true, but isOdd() returns false
}





