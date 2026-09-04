#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "Hello";
    char b[20];
    memset(a, '*', 5);
    a[5] = '\0';
    printf("memset()  : %s\n", a);
    memcpy(b, "Hello", 6);
    printf("memcpy()  : %s\n", b);
    char str[] = "123456";
    memmove(str + 2, str, 4);
    str[6] = '\0';
    printf("memmove() : %s\n", str);
    return 0;
}
