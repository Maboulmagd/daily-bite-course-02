#include "fibonacci.h"

unsigned fibonacci(unsigned id) {
  // Initial values 0 and 1
  unsigned x = 0;
  unsigned y = 1;

  // Generate the next fibonacci number, keeping the n-th element in x
  for (unsigned i = 0; i < id; ++i) {
    unsigned next = x + y;
    y = x;
    x = next;
  }

  // return the n-th element
  return x;
}