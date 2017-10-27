#include <iostream>

#include "Greeter.h"
#include "Person.h"

int main(int argc, char *argv[]) {
  Person p{"Emmanuel"};
  Greeter g;

  std::cout << g.greet() << '\n';
  std::cout << g.greetTo(p) << '\n';
  return 0;
}
