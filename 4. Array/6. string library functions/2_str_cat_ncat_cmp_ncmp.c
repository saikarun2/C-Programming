#include <stdio.h>
#include <string.h>
int main()
{
    char a[50] = "Hello";
    char b[50] = "World";
    char c[50] = "Hello";
    char d[50] = "Help";
    strcat(a, b);
    printf("strcat()  : %s\n", a);
    strncat(c, d, 2);
    printf("strncat() : %s\n", c);
    printf("strcmp()  : %d\n", strcmp(a, b));
    printf("strncmp() : %d\n", strncmp(c, d, 2));
    return 0;
}
