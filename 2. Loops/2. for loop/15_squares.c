#include<stdio.h>
int main()
{
    printf("the square of 1-10 numbers are: \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d = %d\n", i, i*i);
    }
    return 0;
}