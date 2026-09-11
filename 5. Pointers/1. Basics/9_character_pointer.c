#include <stdio.h>
int main()
{
    char src[100], dest[100];
    char *s = src, *d = dest;
    printf("Enter a string: ");
    fgets(src, sizeof(src), stdin);
    while ((*d++ = *s++));
    printf("Copied string: %s", dest);
    return 0;
}