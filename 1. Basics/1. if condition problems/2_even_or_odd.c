#include<stdio.h>
int main(){
     int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("The given number is Even");
    }
    if(n%2!=0){
        printf("The given number is Odd");
    }
    return 0;
}