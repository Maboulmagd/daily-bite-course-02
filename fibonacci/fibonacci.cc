#include "fibonacci.h"

unsigned fibonacci(unsigned id) {
  if (id == 0) {
    return 0;
  }

  unsigned first = 0;
  unsigned second = 1;

  while (id > 1) {
    const unsigned sum = first + second;

    first = second;
    second = sum;

    --id;
  }

  return second;
}