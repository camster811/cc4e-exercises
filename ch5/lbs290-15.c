/* You are to perform the following steps in a function named process():
 * (1) Print out the string you are passed.
 * (2) Count the number of characters in the string.
 * (3) If there are more than 10 characters in the string print out the 10th character (line[9])
 * (4) Go through the string and replace every blank with a dash '-'
 * (5) Print out the new string with dashes.
 */

void process(line)
    char line[];
{
    int size = strlen(line);
    printf("\nString: %s\n",line);

    printf("Count=%d\n", size);

    if (size > 10) {
        printf("The ninth character is: %c\n", line[9]);
    }

    char *p;
    for (p = line; *p != '\0'; p++) {
        if (*p == ' ') {
            *p = '-';
        }
    }
    printf("String: %s\n", line);
}

/* Output:
String: Hi there and welcome to LBS290
Count=30
The ninth character is: a
String: Hi-there-and-welcome-to-LBS290

String: I love C
Count=8
String: I-love-C
*/

#include <stdio.h>
#include <string.h>
int main() {
    char line[1000];
    void process();
    strcpy(line,"Hi there and welcome to LBS290");
    process(line);
    strcpy(line,"I love C");
    process(line);
}
