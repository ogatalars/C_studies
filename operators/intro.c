// C divides the operators into the following groups:

// Arithmetic operators
// Assignment operators
// Comparison operators
// Logical operators
// Bitwise operators
#include <stdio.h>

int main() {
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  int minor = sum1 - sum2;
  int major = sum3 / sum2;
  int remainder = sum3 % sum2;
  printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("%d\n", sum3);
  printf("%d\n", minor);
  return 0;
}