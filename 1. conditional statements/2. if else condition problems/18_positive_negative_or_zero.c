#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    if(n>0){
        printf("the n value is positive\n");
    }   
    else{
        if(n<0){
            printf("the n value is negative\n");
        }
        else{
            printf("the n value is zero\n");
        }
    }
    return 0;
}