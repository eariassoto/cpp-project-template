#ifndef __MOCKPERSON__
#define __MOCKPERSON__
#include "Person.h"
#include "gmock/gmock.h"
#include <string>

class MockPerson : public Person {
public:
  MOCK_CONST_METHOD0(getName, std::string());
};
#endif /** __MOCKPERSON__ */