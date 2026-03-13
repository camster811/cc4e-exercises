#include <stdio.h>
int main() {
    int htoi();
    printf("htoi('8cafa') = %d\n", htoi("8cafa"));
    printf("htoi('f') = %d\n", htoi("f"));
    printf("htoi('F0') = %d\n", htoi("F0"));
    printf("htoi('12fab') = %d\n", htoi("12fab"));
}

int exponent(int ex) {
int i;
int num = 1;
  	if (ex == 0) {
     	return 1;
    }
    for (i = 0; i < ex; i++) {
        num = num * 16;
    }
   	return num;
}

int htoi(s) /* convert hex to dec */
char s[];
{
    int strlen = 0;
  	int i = 0;
	while (s[i] != '\0') {
      strlen++;
      i++;
    }
  	int value = 0;
    int strlencopy = strlen;
  	int j;
  	for (j = 0; j < strlencopy; j++) {
      strlen--;
      switch (s[j]) {
        case 'A': case 'a':
          value = value + (10 * exponent(strlen));
          break;
        case 'B': case 'b':
          value = value + (11 * exponent(strlen));
          break;
        case 'C': case 'c':
          value = value + (12 * exponent(strlen));
          break;
        case 'D': case 'd':
          value = value + (13 * exponent(strlen));
          break;
        case 'E': case 'e':
          value = value + (14 * exponent(strlen));
          break;
        case 'F': case 'f':
          value = value + (15 * exponent(strlen));
          break;
        default:
         if (s[j] >= '0' && s[j] <= '9') {
             value = value + (s[j] - '0') * exponent(strlen);
         }
          break;
      }
   }
   return value;
}
