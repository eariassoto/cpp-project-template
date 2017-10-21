#include <gtest/gtest.h>
#include "greeter.h"

TEST(GreeterTests, GreetTest) {
    Greeter g;
    ASSERT_STREQ(g.greet().c_str(), "Hello world!");
}

TEST(GreeterTests, GreetToTest) {
    auto name = "Greg";
    Greeter g;
    ASSERT_STREQ(g.greetTo(name).c_str(), "Hi Greg!");
}

