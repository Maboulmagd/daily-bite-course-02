#include "gcd.h"

// Calculate GCD using the Euclidean algorithm
unsigned gcd(unsigned x, unsigned y) {
  // we need x >= y, so if that's not true
  // return the result with swapped arguments
  if (x < y)
    return gcd(y, x);
  // if y == 0 we are done with the algorithm
  // and the gcd is x
  if (y == 0)
    return x;
  // otherwise the gcd is gcd(y, x % y)
  return gcd(y, x % y);
}