#include<stdio.h>
int main(){
     int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    if(n%2==0 &&n>0){
        printf("The given number is Even and positive");
    }
    if(n%2!=0 && n>0){
        printf("The given number is Odd and positive");
    }
    if(n%2==0 &&n<0){
        printf("The given number is Even and negative");
    }
    if(n%2!=0 && n<0){
        printf("The given number is Odd and negative");
    }
    return 0;
}