#include<stdio.h>
int main(){
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("Hello");
    }
    if(ch<'A'|| ch>'Z'){
        printf("the given charater is not in upper case");
    }

}