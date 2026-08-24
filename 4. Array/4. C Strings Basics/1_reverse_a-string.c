#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string: ");
    scanf("%s",str);
    printf("%s\n", str);
    int len = strlen(str);
    printf("the reversed string: ");
    for (int i = len-1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}