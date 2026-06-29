#include<stdio.h>
int main(){
    int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    if(n%4==0){
        printf("The given number is multiple of4");
    }
    if(n%4!=0){
        printf("The given number is not a multiple of 4");
    }
}