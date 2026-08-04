#include<stdio.h>
int main()
{
    int sum=0;
    for (int i = 0; i <= 100; i++)
    {
        if(i % 2 == 0){
            sum += i;
        }
    }
    printf("the sum of even numbers from 1 to 100 = %d",sum);
    
    return 0;
}