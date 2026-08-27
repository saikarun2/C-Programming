#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Digits: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit((unsigned char)str[i]))
            putchar(str[i]);
    }
    putchar('\n');
    return 0;
}
