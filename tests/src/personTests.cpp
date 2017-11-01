#include "Person.h"
#include <gtest/gtest.h>

TEST(GreeterTests, PersonGetNameTest) {
  Person p{"Woz"};
  ASSERT_STREQ(p.getName().c_str(), "Woz");
}
