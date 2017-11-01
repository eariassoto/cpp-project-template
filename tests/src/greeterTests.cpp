#include "Greeter.h"
#include "MockIPerson.h"
#include <gtest/gtest.h>
using ::testing::Return;

TEST(GreeterTests, GreetTest) {
  Greeter g;
  ASSERT_STREQ(g.greet().c_str(), "Hello world!");
}

TEST(GreeterTests, GreetToTest) {
  MockIPerson mockPerson;
  EXPECT_CALL(mockPerson, getName()).WillOnce(Return("Greg"));
  Greeter g;
  ASSERT_STREQ(g.greetTo(mockPerson).c_str(), "Hi Greg!");
}
