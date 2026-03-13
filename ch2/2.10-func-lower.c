#include <stdio.h>
int main() {
  int lower();
  printf("Lower M is %c\n", lower('M'));
  printf("Lower x is %c\n", lower('x'));
  printf("Lower @ is %c\n", lower('@'));
  printf("Lower q is %c\n", lower('q'));
}

int lower(c) /* convert c to lower case; ASCII only */
int c;
{
  int x;
  x = (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
  return x;
}
