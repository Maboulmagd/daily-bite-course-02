#include "catch2/catch_test_macros.hpp"
#include "catch2/matchers/catch_matchers_floating_point.hpp"
#include "celsius.h"

TEST_CASE("to_fahrenheit", "") {
  REQUIRE_THAT(to_fahrenheit(0), Catch::Matchers::WithinRel(32.0, 0.001));
  REQUIRE_THAT(to_fahrenheit(-40), Catch::Matchers::WithinRel(-40, 0.001));
  REQUIRE_THAT(to_fahrenheit(100), Catch::Matchers::WithinRel(212, 0.001));
  REQUIRE_THAT(to_fahrenheit(25), Catch::Matchers::WithinRel(77, 0.001));
  REQUIRE_THAT(to_fahrenheit(-273.15),
               Catch::Matchers::WithinRel(-459.67, 0.001));
}

TEST_CASE("to_celsius", "") {
  REQUIRE_THAT(to_celsius(32), Catch::Matchers::WithinRel(0, 0.001));
  REQUIRE_THAT(to_celsius(-40), Catch::Matchers::WithinRel(-40, 0.001));
  REQUIRE_THAT(to_celsius(212), Catch::Matchers::WithinRel(100, 0.001));
  REQUIRE_THAT(to_celsius(77), Catch::Matchers::WithinRel(25, 0.001));
  REQUIRE_THAT(to_celsius(-459.67), Catch::Matchers::WithinRel(-273.15, 0.001));
}