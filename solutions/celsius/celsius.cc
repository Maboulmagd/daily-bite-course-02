#include "celsius.h"

// Convert Fahrenheit to Celsius using the standard formula
double to_celsius(double fahrenheit) { return (fahrenheit - 32) * 5 / 9; }

// Convert Celsius to Fahrenheit using the standard formula
double to_fahrenheit(double celsius) { return celsius * 9 / 5 + 32; }