#include "celsius.h"

double to_celsius(double fahrenheit) {
  return (fahrenheit - 32.0) * (5.0 / 9.0);
}

double to_fahrenheit(double celsius) {
  return ((9.0 * celsius) / 5.0) +
         32.0; // Avoid any implicit conversions by continuing to use doubles
}