#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("printf enter the value of a: ");
    scanf("%d",&a);
    printf("printf enter the value of b: ");
    scanf("%d",&b);
    printf("printf enter the value of c: ");
    scanf("%d",&c);
    printf("printf enter the value of d: ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("The greatest value is A");
    }
    else{
        if(b>a && b>c && b>d){
            printf("The greatest value is B");
        }
        else{
            if(c>a && c>b && c>d){
                printf("The greatest value is C");
            }
            else{
                printf("The greatest value is D");
            }
        }
    }
    return 0;
}