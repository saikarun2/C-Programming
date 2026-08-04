#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("enter the string value: ");
    scanf("%s",str);
    int i=0, len= strlen(str), flag =0;
    while(i<=len/2){
        if(str[i] != str[len-i-1]){
            flag =1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("the given string is a palindrome\n");
    }
    else{
        printf("the given string is not a palindrome\n");
    }

    return 0;
}