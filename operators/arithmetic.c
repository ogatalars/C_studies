// Operator	Name	Description	Example	Try it
// +	Addition	Adds together two values	x + y	
// -	Subtraction	Subtracts one value from another	x - y	
// *	Multiplication	Multiplies two values	x * y	
// /	Division	Divides one value by another	x / y	
// %	Modulus	Returns the division remainder	x % y	
// ++	Increment	Increases the value of a variable by 1	++x	
// --	Decrement	Decreases the value of a variable by 1	--x
#include <stdio.h>

int main() {
  int x = 10;
  int y = 20;
  int z = x + y;
  int w = x % y;
  int a = x++ + y;
  int b = x - y;
  printf("%d\n", z);
  printf("%d\n", w);
  return 0;
}