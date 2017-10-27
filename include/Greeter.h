#ifndef __GREETER__
#define __GREETER__
#include "IPerson.h"
#include <string>

class Greeter {
public:
  std::string greet();
  std::string greetTo(IPerson &person);
};
#endif /* __GREETER__ */
