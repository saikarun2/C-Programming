#include<stdio.h>
int main(){
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    if(year% 400==0 ||(year % 4 == 0 && year% 100 !=0 )){
        printf("The given year is a leap year");
    }
    else{
        printf("The given year is not a leap year");
    }
    return 0;
}