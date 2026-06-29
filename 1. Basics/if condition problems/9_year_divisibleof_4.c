#include<stdio.h>
int main(){
    int n;
    printf("enter the year: ");
    scanf("%d",&n);
    if(n%4==0){
        printf("The given year is divisible by 4");
    }
    if(n%4!=0){
        printf("The given year is not a divsible by 4");
    }
}