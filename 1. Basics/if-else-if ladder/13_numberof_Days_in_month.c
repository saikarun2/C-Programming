#include<stdio.h>

int main()
{
    int month, year;
    printf("enter the month(1-12): ");
    scanf("%d",&month);
    printf("enter the year: ");
    scanf("%d",&year);
    if(month == 1||month ==3|| month ==5|| month ==7 || month == 8|| month ==10|| month ==12){
        printf("The month has 31 days\n");
    }
    else if(month == 11||month ==4|| month ==6|| month ==9){
        printf("The month has 30 days\n");
    }
    else if(month ==2){
        if(year%400==0 ||(year%4 == 0 && year % 100!= 0)){
            printf("The year is leap year so month has 29 days");   
        }
        else{
            printf("The year is not a leap year so month has 28 days");   
        }
    }
    else{
        printf("Invalid month!\n");
    }
    return 0;
}