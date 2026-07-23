#include<stdio.h>

int main()
{
    int n, square,sum;
    printf("enter the value of n: ");
    scanf("%d",&n);
    square = n*n;
    while(square>0){
        sum += square%10;
        square/=10;
    }
    if(sum ==n){
        printf("The given number is neon number");
    }
    else{
        printf("The given number is not neon number");
    }
    return 0;
}