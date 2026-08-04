#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("enter the string value: ");
    scanf("%s",str);
    int i=0, len= strlen(str), flag =0;
    while(i<len/2){
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len - i -1] = temp;
        i++;
    }
    printf("%s",str);
    return 0;
}