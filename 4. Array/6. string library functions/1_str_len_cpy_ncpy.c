#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "Hello, World!";
    char copy[sizeof(src)];
    char partial[6];
    printf("Length: %zu\n", strlen(src));
    strcpy(copy, src);
    printf("strcpy(): %s\n", copy);
    strncpy(partial, src, sizeof(partial) - 1);
    partial[sizeof(partial) - 1] = '\0';
    printf("strncpy(): %s\n", partial);
    return 0;
}
