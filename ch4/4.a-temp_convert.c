/*  that takes as input a double Celsius temperature and converts 
    it and returns the equivalent Fahrenheit value. */
#include <stdio.h>

int main() {
  double faren();
  printf("faren(42) is %.1f\n", faren(42.0));
  printf("faren(0) is %.1f\n", faren(0.0));
  printf("faren(-10) is %.1f\n", faren(-10.0));
  printf("faren(32) is %.1f\n", faren(32.0));
  printf("faren(100) is %.1f\n", faren(100.0));
  printf("faren(212) is %.1f\n", faren(212.0));
}

double faren(celsius)
double celsius;
{
  double f_val = (9.0/5.0) * celsius + 32.0;
  return f_val;
}






/* faren(42) is 107.6
faren(0) is 32.0
faren(-10) is 14.0
faren(32) is 89.6
faren(100) is 212.0
faren(212) is 413.6
*/