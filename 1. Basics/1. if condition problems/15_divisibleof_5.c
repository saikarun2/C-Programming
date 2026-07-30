#include<stdio.h>
int main(){
    int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    if(n%5==0){
        printf("The given number is divisible by 5");
    }
    if(n%5!=0){
        printf("The given number is not a divsible by 5");
    }
}