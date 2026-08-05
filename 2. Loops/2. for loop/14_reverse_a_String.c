#include<stdio.h>
#include<string.h>
int main()
{
    char str[] =" My embedded journey is going so well";
    int len = strlen(str);
    for (int i = len; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}