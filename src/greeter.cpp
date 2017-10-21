#include "greeter.h"

std::string Greeter::greet() { return "Hello world!"; }

std::string Greeter::greetTo(std::string name) {
    return "Hi " + name + "!";
}

