// Format Specifiers
// Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

// A format specifier starts with a percentage sign %, followed by a character.

// For example, to output the value of an int variable, you must use the format specifier %d or %i surrounded by double quotes, inside the printf() function:

#include <stdio.h> 
int main() {
  // Create variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}