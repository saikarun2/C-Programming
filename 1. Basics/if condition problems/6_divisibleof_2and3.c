#include<stdio.h>
int main(){
    int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    if(n%2==0 && n%3==0){
        printf("The given number is divisible by both 2 and 3");
    }
    if(n%2!=0 || n%3!=0){
        printf("The given number is not a divisible by both 2 and 3");
    }
}