#include "catch2/catch_test_macros.hpp"
#include "gcd.h"

TEST_CASE("gcd", "") {
  REQUIRE(gcd(12, 18) == 6);
  REQUIRE(gcd(25, 5) == 5);
  REQUIRE(gcd(0, 5) == 5);
  REQUIRE(gcd(17, 23) == 1);
  REQUIRE(gcd(15, 0) == 15);
}