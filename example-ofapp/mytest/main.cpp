//
//  main.cpp
//  googletest
//
//  Created by motoishmz on 2/6/17.
//
//

#include <iostream>
#include <gtest/gtest.h>
#include "ofMain.h"
#include "MyIntTest.h"

class Test : public ofBaseApp {
public:
  Test(int argc, char **argv)
  : argc(argc),
  argv(argv) {}
  
  virtual void setup() {
    ::testing::InitGoogleTest(&argc, argv);
#ifdef TARGET_OSX
    ofExit(RUN_ALL_TESTS());
#endif
#ifdef TARGET_WIN32
    RUN_ALL_TESTS();
#endif
  }
  
  int argc;
  char **argv;
};


int main(int argc,  char * argv[]) {
  
  ofGLWindowSettings settings;
  settings.width = 1600;
  settings.height = 900;
  settings.setGLVersion(2, 1);
  ofCreateWindow(settings);
  
  ofRunApp(new Test(argc, argv));
  
  return 0;
}
