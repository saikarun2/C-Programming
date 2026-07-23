#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the values of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c) && (a+c>b) && (b+c>a) ){
        printf("The Triangle is valid");
    }
    else{
        printf("The Triangle is not valid");
    }
    return 0;
}