#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d", &b);
    if(a>b){
        printf("the largest number is a =%d",a);
    }
    else{
        printf("the largest number is b =%d",b);   
    }
    return 0;
}