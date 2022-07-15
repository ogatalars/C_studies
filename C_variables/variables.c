/*
Variables are containers for storing data values.

In C, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes


syntax 
type variableName = value
example
int myInt = 123;

int myNum = 15;
printf(myNum);  // Nothing happens
*/ 

#include <stdio.h>

int main() {
    int myInt = 123;
    float myFloat = 19.99;
    char myChar = 'a';
    printf("%d\n", myInt);
    printf("%f\n", myFloat);
    printf("%c\n", myChar);
    return 0;
}