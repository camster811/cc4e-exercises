/*  bump() that uses an static variable so that the first time it is called, 
    it returns int 0, the next time it returns 1 and so on. 

    Also write a function called start() which takes an int as its parameter and restarts 
    the sequence from the specified number. */

#include <stdio.h>
int main() {
  int bump();
  void start();
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  start(42);
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
}

static int bump_val = 0;
int bump()
{
  return bump_val++;
}

void start(int start_val) {
    bump_val = start_val;
}


/* bump() returns 0
bump() returns 1
bump() returns 2
bump() returns 42
bump() returns 43
*/