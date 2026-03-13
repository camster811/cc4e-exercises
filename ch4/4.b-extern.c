/*  bump() that uses an extern variable so that the first time it is called, 
    it returns int 0, the next time it returns 1 and so on. 
*/
#include <stdio.h>
int main() {
  int bump();
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
}

extern int bump_counter;
int bump_counter = 0;
int bump()
{
  	return bump_counter++;
}

/* bump() returns 0
bump() returns 1
bump() returns 2
bump() returns 3
bump() returns 4
*/