// const int myNum = 15;  // myNum will always be 15
// myNum = 10;  // error: assignment of read-only variable 'myNum'
#include <stdio.h>

int main() {
  const int myNum = 15;
  myNum = 10; // nao vai deixar funcionar
  
  printf("%d", myNum);
  return 0;
}