#pragma once

class MyInt {
  
public:
  MyInt(int n)
  : num_(n)
  {}
  
  bool isEven() const {
    return num_ % 2 == 0;
  }
  
  bool isOdd() const {
    return isEven(); // <-- boom
  }
  
private:
  int num_;
};
