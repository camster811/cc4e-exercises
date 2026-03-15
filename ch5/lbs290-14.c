/* The program will create a 10 element array and read in 10 integers into the array.
 * Then the program will print the integers backwards.
 * Then the program will scan for entries in the array which contain the value 100 and print out the index of the entries with the number 100.
 * The program will also count the number of entries which equal 100. The program should work even if there are no entries which equal 100.
 */

#include <stdio.h>
int main() {
   int i, v, arr[10];
   for(i=0;i<10;i++) {
       scanf("%d", &v);
       arr[i] = v;
   }

   // Print integers backwards
   for (i=9; i>=0; i--) {
       printf("numb[%d] = %d\n", i, arr[i]);
   }

   int hundreds = 0;
   int *p;
   printf("\nSearching for entries equal to 100\n\n");
   for (p = arr; p < arr + 10; p++) {
       if (*p == 100) {
           printf("Found 100 at %ld\n", (p-arr));
           hundreds++;
       }
   }
   printf("\nFound %d entries with 100", hundreds);
}

/* Input:
 9
 5
 100
 16
 18
 20
 6
 100
 1
 77
 */

/* Output:
numb[9] = 77
numb[8] = 1
numb[7] = 100
numb[6] = 6
numb[5] = 20
numb[4] = 18
numb[3] = 16
numb[2] = 100
numb[1] = 5
numb[0] = 9

Searching for entries equal to 100

Found 100 at 2
Found 100 at 7

Found 2 entries with 100
 */
