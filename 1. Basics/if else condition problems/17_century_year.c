#include<stdio.h>
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    if(year%100==0){
        printf("the year is century year");
    }
    else{
        printf("the year is not century year");
    }
    return 0;
}