#include "lcm.h"
#include "gcd.h"

// Least common multiple is simply (x * y) / gcd(x,y)
unsigned lcm(unsigned x, unsigned y) { return x / gcd(x, y) * y; }