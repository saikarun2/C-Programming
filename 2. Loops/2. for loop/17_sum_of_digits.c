#include<stdio.h>
int main()
{
    int n, sum=0, rem;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (int i = n; i != 0; i--)
    {
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    printf("the sum of the digits are: %d ",sum);
    return 0;
}