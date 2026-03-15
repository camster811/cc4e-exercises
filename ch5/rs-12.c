/* Write a C function called py_lstrip() that removes whitespace (blanks, tabs, and newlines)
 * from the beginning of a string. This function modifies its parameter and should never be called with a constant value.
 */

void py_lstrip(inp)
    char inp[];
{
    int i;
    for (i = 0; i < strlen(inp)-1; i++) {
        if (inp[i] == ' ' || inp[i] == '\t' || inp[i] == '\n') {
            ;
        }
        else {
            break;
        }
    }

    int j;
    for (j = 0; inp[i] != '\0'; j++) {
        inp[j] = inp[i++];
    }
    inp[j] = '\0';
}

// Output: -Hello   World    -

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s1[] = "   Hello   World    ";
    void py_lstrip();
    py_lstrip(s1);
    printf("-%s-\n", s1);
}
