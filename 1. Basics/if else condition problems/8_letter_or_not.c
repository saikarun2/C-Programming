#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        printf("the enter character is letter %c",ch);
    }
    else{
        printf("the entered character is special character");
    }
    return 0;
}