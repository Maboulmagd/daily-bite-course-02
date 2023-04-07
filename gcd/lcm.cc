#include "lcm.h"
#include "gcd.h"

// No need to do prime factorization
unsigned lcm(unsigned x, unsigned y) {
  // x is now guaranteed to be the bigger or equal integer
  if (x < y) {
    unsigned x_temp = x;
    x = y;

    y = x_temp;
  }

  unsigned lcm = x;

  while (true) {
    if (lcm % y == 0) {
      break;
    }
    lcm += x;
  }

  return lcm;
}