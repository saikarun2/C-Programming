#include<stdio.h>

int main()
{
    int n,sum=0,product =1,temp;
    printf("enter the value of n: ");
    scanf("%d",&n);
    temp =n;
    while(temp>0){
        int rem = temp%10;
        sum+=rem;
        product*=rem;
        temp/=10;
    }
    if(sum == product){
        printf("The given number is a spy number");
    }
    else{
        printf("The given number is not a spy number");
    }
    return 0;
}