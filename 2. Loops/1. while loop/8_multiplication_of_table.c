#include<stdio.h>
int main()
{
    int i=1, num;
    printf("enter the number: ");
    scanf("%d",&num);
    while (i<=10)
    {
        printf("%d * %d = %d\n",num,i,i*num);
        i++;
    }
    
    return 0;
}