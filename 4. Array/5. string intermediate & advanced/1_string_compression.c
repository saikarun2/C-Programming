#include <stdio.h>
int main()
{
    char s[1000];
    int i, j;
    printf("enter the string: ");
    scanf("%999s", s);
    for (i = 0; s[i] != '\0'; i = j)
    {
        for (j = i + 1; s[j] == s[i]; j++);
        printf("%c%d", s[i], j - i);
    }

    return 0;
}
