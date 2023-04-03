#include "catch2/catch_test_macros.hpp"
#include "lcm.h"

TEST_CASE("lcm", "") {
  REQUIRE(lcm(12, 18) == 36);
  REQUIRE(lcm(25, 5) == 25);
  REQUIRE(lcm(0, 5) == 0);
  REQUIRE(lcm(17, 23) == 391);
  REQUIRE(lcm(15, 0) == 0);
}