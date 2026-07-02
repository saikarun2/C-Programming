#include<stdio.h>
int main(){
    int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    if(n%5==0){
        printf("The given number is multiple of 5");
    }
    else{
        printf("The given number is not a multiple of 5");
    }
}