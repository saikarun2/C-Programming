#include<stdio.h>
int main(){
    char ch;
    printf("enter the character 0-9: ");
    scanf("%c",&ch);
    if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'){
        printf("The entered character is digit");
    }
    if(ch!='0'&& ch!='1'&& ch!='2'&& ch!='3'&& ch!='4'&& ch!='5'&& ch!='6'&& ch!='7'&& ch!='8' && ch!='9'){
        printf("The entered character is not a digit");
    }
}