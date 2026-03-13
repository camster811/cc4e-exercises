#include <stdio.h>
#include <string.h>
int main() {
  char s[1000];
  void itob(), itoh(), reverse();

  itob(42,s);
  printf("42 in base-2 is %s\n", s);
  itoh(42,s);
  printf("42 in base-16 is %s\n", s);

  itob(16,s);
  printf("16 in base-2 is %s\n", s);
  itoh(16,s);
  printf("16 in base-16 is %s\n", s);

  itob(59,s);
  printf("59 in base-2 is %s\n", s);
  itoh(59,s);
  printf("59 in base-16 is %s\n", s);

  itob(100,s);
  printf("100 in base-2 is %s\n", s);
  itoh(100,s);
  printf("100 in base-16 is %s\n", s);

  itob(254,s);
  printf("254 in base-2 is %s\n", s);
  itoh(254,s);
  printf("254 in base-16 is %s\n", s);
}

void reverse(t)
char t[];
{
    int i, j, len;
    char tmp;
    len = strlen(t);
    for(i=0, j=len-1;;i++,j--) {
        if (j<i) break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    return;
}

/* Write a function itob(n, s) which converts the unsigned integer n into a binary (base 2) character representation in s.
 * You can assume that the s variable contains enough space.
 * Make sure to properly terminate s with the end-of-string marker '\0' before returning.
*/
void itob(n, s)
int n;
char s[];
{
    void reverse();

    int i = 0;
    int quotient = n;
    int remainder;
    while (quotient > 0) {
        remainder = quotient % 2;
        s[i++] = remainder + '0';
        quotient /= 2;
    }
    s[i] = '\0';
    reverse(s);
}

/* Write itoh, which converts an integer to hexadecimal representation.  */
void itoh(n, s)
int n;
char s[];
{
    void reverse();

    int i = 0;
    int quotient = n;
    int remainder;
    while (quotient > 0) {
        remainder = quotient % 16;
        if (remainder > 9) {
            s[i++] = 'a' + (remainder - 10);
        }
        else {
            s[i++] = remainder + '0';
        }
        quotient /= 16;
    }
    s[i] = '\0';
    reverse(s);
}
/* 42 in base-2 is 101010
42 in base-16 is 2a
16 in base-2 is 10000
16 in base-16 is 10
59 in base-2 is 111011
59 in base-16 is 3b
100 in base-2 is 1100100
100 in base-16 is 64
254 in base-2 is 11111110
254 in base-16 is fe */
