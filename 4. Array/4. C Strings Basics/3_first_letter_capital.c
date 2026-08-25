#include <stdio.h>
int main()
{
    char str[1000];
    int i;
    printf("enter the string:\n");
    fgets(str, sizeof(str), stdin);
    if (str[0] >= 'a' && str[0] <= 'z'){
        str[0] -= 32;
    }
    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    printf("%s", str);
    return 0;
}
