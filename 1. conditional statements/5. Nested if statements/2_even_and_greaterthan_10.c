#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    if(n%2==0){
        if(n>10){
            printf("the given number is even and greater than 10\n");
        }
        else{
            printf("The given number is even but less than 10\n");
        }
    }
    else{
        if(n>10){
            printf("The given number is not even but greater than 10\n");
        }
        else{
            printf("The given number is not greater than 10 and even\n");
        }
        
    }
    return 0;
}