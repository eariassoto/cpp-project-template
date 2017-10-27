#include "Greeter.h"

std::string Greeter::greet() { return "Hello world!"; }

std::string Greeter::greetTo(IPerson &person) {
  return "Hi " + person.getName() + "!";
}

