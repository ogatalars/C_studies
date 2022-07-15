// Good Practice
// Another thing about constant variables, is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers:
#include <stdio.h>

int main() {
  const int BIRTHYEAR = 1980;
  
  printf("%d", BIRTHYEAR);
  return 0;
}