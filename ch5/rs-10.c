/* Write a C program to prompt for two strings and concatenate them as shown in in the
 * Python code below. Use the functions strcpy and strcat from the string.h library in your code.
 * Pre-allocate your character arrays large enought to handle up to 100 characters
 * on input for each string (i.e. do not use malloc as we have not yet covered that yet).
 */

/*
 * print('Enter two strings');
 * first = input()
 * second = input()
 * print(first + " & " + second)
 */

#include <stdio.h>
#include <string.h>
int main() {
    char first[100], second[100];
    char combined[210];

    printf("Enter two strings\n");
    scanf("%s %s", first, second);

    strcpy(combined, first);
    strcat(combined, " & ");
    strcat(combined, second);

    printf("%s", combined);
}

/* Input
 * Kernighan
 * Ritchie
 *
 * Output
 * Enter two strings
 * Kernighan & Ritchie
 */
