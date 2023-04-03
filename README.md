# Modern-only C++ course - Homework

This repository contains the homework for Lesson 2.

## Celsius

Implement two functions, one that converts from Celsius to Fahrenheit and one that converts from Fahrenheit to Celsius in `celsius/celsius.cc`.

The goal is to have the following commands pass without any errors:

```
bazel test //celsius/...
bazel test --config=addrsan //celsius/...
bazel test --config=ubsan //celsius/...
```

## GCD and LCM

C++ already offers a standard version of the greatest common divisor algorithm.
As an exercise, implement your own version in `gcd/gcd.cc`.

Once you have finished, also implement the least common multiple algorithm in `gcd/lcm.cc`. The build system is already setup to make your GCD implementation available to you when you are implementing least common multiple.

The goal is to have the following commands pass without any errors:

```
bazel test //gcd/...
bazel test --config=addrsan //gcd/...
bazel test --config=ubsan //gcd/...
```

## Fibonacci

Implement a function that returns the n-th fibonacci number in `fibonacci/fibonacci.cc`.

For the purpose of this exercise, consider the zero-th and first fibonacci numbers: 0, 1.

The goal is to have the following commands pass without any errors:

```
bazel test //fibonacci/...
bazel test --config=addrsan //fibonacci/...
bazel test --config=ubsan //fibonacci/...
```

## Solutions

If you desire to have a look at the solutions, you can find the commented code in the `solutions` directory.