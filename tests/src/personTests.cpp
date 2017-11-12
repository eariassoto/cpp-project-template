#include "Person.h"
#include <stdexcept>
#include <gtest/gtest.h>

TEST(GreeterTests, PersonValidCtorTest) {
	ASSERT_NO_THROW({
		Person p{"Alexa"};
	});
}

TEST(GreeterTests, PersonInvalidCtorTest) {
	ASSERT_THROW({
		Person p{""};
	}, std::invalid_argument);
}

TEST(GreeterTests, PersonGetNameTest) {
  Person p{"Woz"};
  ASSERT_STREQ(p.getName().c_str(), "Woz");
}
