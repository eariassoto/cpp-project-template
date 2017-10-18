// System includes
#include "greeter.h"
#include <iostream>

int main(int argc, char *argv[]) {
  Greeter greeter;
  std::cout << greeter.greet() << '\n';
  return 0;
}
