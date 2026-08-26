#include <stdio.h>
int main()
{
    char str[100];
    char *src, *dst;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    src = dst = str;
    while (*src)
    {
        switch (*src)
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                src++;
                break;

            default:
                *dst++ = *src++;
        }
    }
    *dst = '\0';
    printf("String without vowels: %s", str);
    return 0;
}
