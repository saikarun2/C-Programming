#include<stdio.h>
int main()
{
    char str[100];
    int count =0,i;
    printf("enter the string: ");
    fgets(str,sizeof(str),stdin);
    while(str[count]!='\0' && str[count]!='\n')
    {
        count++;
    }
    printf("the length of the string is %d",count);
    return 0;
}