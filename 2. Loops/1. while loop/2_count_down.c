#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int i =1;
    while(i<=n){
        printf("%d ",i);
        i++;
    }
    return 0;
}