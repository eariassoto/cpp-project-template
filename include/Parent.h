#include <iostream>

class Parent {
public:
  virtual ~Parent() {
    std::cout << "I am parent's destructor" << std::endl;
  }
  virtual void method1() {
    std::cout << "I am parent's method 1" << std::endl;
  }
  virtual void method2() = 0;
};

class Child : public Parent {
public:
  ~Child() {
    std::cout << "I am child's destructor" << std::endl;
  }
  void method1() {
    Parent::method1();
    std::cout << "I am child's method 1" << std::endl;
  }
  void method2() {
    std::cout << "I am child's method 2" << std::endl;
  }
};