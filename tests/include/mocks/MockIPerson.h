#ifndef __MOCKIPERSON__
#define __MOCKIPERSON__
#include "IPerson.h"
#include "gmock/gmock.h"
#include <string>

class MockIPerson : public IPerson {
public:
  MockIPerson(){}
  ~MockIPerson(){}
  MOCK_CONST_METHOD0(getName, std::string());
};
#endif /** __MOCKIPERSON__ */