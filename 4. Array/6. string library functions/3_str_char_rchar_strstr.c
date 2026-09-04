#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello World Hello";
    char *p;
    p = strchr(str, 'o');
    printf("strchr()  : %s\n", p);
    p = strrchr(str, 'o');
    printf("strrchr() : %s\n", p);
    p = strstr(str, "World");
    printf("strstr()  : %s\n", p);
    return 0;
}
