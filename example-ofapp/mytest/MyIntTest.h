#pragma once 

#include "MyInt.h"
#include <gtest/gtest.h>

class MyIntTest : public ::testing::Test {};

TEST_F(MyIntTest, MyFirstTest) {
  const int max = 3;
  for (int i=0; i< 10000; i++) {
    const int r = ofRandom(max);
    ASSERT_LT(r+1, max);
  }
}

TEST_F(MyIntTest, IsOddErrorTest) {
  MyInt m(1);
  ASSERT_TRUE(m.isOdd());
}





