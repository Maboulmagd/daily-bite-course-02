#include "gcd.h"

#include <utility>

using namespace std;

unsigned gcd(unsigned x, unsigned y) {

  // Ensure that x >= y
  if (y > x) {
    swap(x, y);
  }

  while (y > 0) {
    const unsigned remainder = x % y;

    x = y;
    y = remainder;
  }

  return x;
}