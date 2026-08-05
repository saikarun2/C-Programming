#include<stdio.h>
int main()
{
    int n1 =0, n2=1, nt=n1+n2;
    printf("%d %d",n1,n2);
    for (int i = 2; i <= 10; i++)
    {
        printf(" %d",nt);
        n1 = n2;
        n2 = nt;
        nt = n1+n2;
    }
    return 0;
}