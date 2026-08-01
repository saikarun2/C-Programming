#include<stdio.h>
int main(){
    int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    if(n<0){
        printf("The given value is negative");
    }
    if(n>0){
        printf("The given value is Positive");
    }
    return 0;
}