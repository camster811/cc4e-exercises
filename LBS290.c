#include "stdio.h"
// This program will prompt for 5 floating point numbers. The program will print out the total of the five numbers and also print out the average.

int main () {
    float numlist[5];

    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter floating point number: ");
        scanf("%f", &numlist[i]);
    }

    float total = 0;
    for (i = 0; i < 5; i++) {
        total = total + numlist[i];
    }

    float average = total / 5;

   	printf("The total is: %.1f\n", total);
   	printf("The average is: %.1f\n", average);
}
