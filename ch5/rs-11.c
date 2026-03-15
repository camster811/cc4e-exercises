/* Write a C function called py_rstrip() that removes spaces from the end of a string.
 * This function modifies its parameter and should never be called with a constant value.
 */

void py_rstrip(inp)
    char inp[];
{
    int length = strlen(inp);
    int i = 0;

    for (i = length-1; i > 0; i--) {
        if (inp[i] == ' ') {
            inp[i] = '\0';
        }
        else {
            break;
        }
    }
}

/* Output:
 * -   Hello   World-
 */

#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "   Hello   World    ";
    void py_rstrip();
    py_rstrip(s1);
    printf("-%s-\n", s1);
}
