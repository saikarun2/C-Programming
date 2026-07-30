#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("enter the string: ");
    scanf("%s",str);
    int len =strlen(str)-1;
    int flag=0;
    for(int i=0;i<strlen(str)-1;i++){
        if(str[i]!=str[len-i]){
            flag =1;
            break;
        }
    }
    if(flag==0){
        printf("the given string is palindrome");
    }
    else{
        printf("the given string is not a palindrome");
    }
    return 0;
}