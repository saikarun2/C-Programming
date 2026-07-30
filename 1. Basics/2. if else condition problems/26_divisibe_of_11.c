#include<stdio.h>

int main()
{
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
    if(n%11==0){
        printf("The given number is divisible of 11");
    }
    else{
        printf("The given number is not divisible of 11");
    }
    return 0;
}