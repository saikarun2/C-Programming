#include<stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n<=1){
        printf("we cannot do prime factorization to this number %d",n);
    }
    while (n%2==0)
    {
        printf("2 ");
        n=n/2;
    }
    for(int i=3;i*i<=n;i=i+2){
        while(n%i ==0){
            printf("%d ",i);
            n/=i;
        }
    }
    if (n > 2) {
        printf("%d ", n);
    }
    printf("\n");
    
    return 0;
}