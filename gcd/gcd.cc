#include "gcd.h"
#include <cmath>

unsigned gcd(unsigned x, unsigned y) {
  if (y == 0) {
    return x;
  }

  if (x > y) {
    return gcd(y, x % y);
  }

  return gcd(y, y % x);
}