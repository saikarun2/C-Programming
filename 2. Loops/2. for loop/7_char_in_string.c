#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Hello world this is my embedded journey";
    int n = strlen(str); 
    for (int i = 0; i < n; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}