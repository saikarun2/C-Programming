#include<stdio.h>
int main()
{
    int n, steps=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    if(n<=0){
        printf("enter the positive value\n");
    }
    while (n != 1)
    {
        if(n%2 ==0){
            n/=2;
        }
        else{
            n = 3*n+1;
        }
         printf("->%d ", n);
         steps++;
    }
    printf("\n");
    printf("%d",steps);
    return 0;
}