#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("enter the number(100 - 999): ");
    scanf("%d",&num);
    while (num>0)
    {
        rem =num%10;
        sum += rem;
        num/=10;
    }
    printf("the sum of the given number is %d",sum);
    return 0;
}