#include<stdio.h>
int main(){
    int n;
    printf("enter the n value: ");
    scanf("%d",&n);
    if(n>=10 && n<=100){
        printf("The given number is in the range of 10 to 100");
    }
    if(n<10 || n>100){
        printf("The given number is not in the range of 10 to 100");
    }

}