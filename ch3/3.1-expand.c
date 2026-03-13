
 #include <stdio.h>

 int main() {
   char t[1000];
   void expand();
   expand("Hello world\t", t);
   printf("%s\n", t);
 }

 /* Expected output
  * Hello world
  * Hello world\n
  * Hello\tworld\n
  * Hello\tworld\nHave a nice\tday\n
  */

  /* expand(s, t)  copies the string s to t
   * expanding newlines and tabs to '\n' and '\t'
   * use a switch statement
   * assume that the t variable is large enough
   * properly terminate the string t
   */
void expand(s, t)
  char s[], t[];
  {
    int i, j;
    for(i=0, j=0; s[i]; i++) {
        switch (s[i]) {
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            default:
                t[j] = s[i];
                j++;
                break;
        }
    }
    t[j] = '\0';
  }
