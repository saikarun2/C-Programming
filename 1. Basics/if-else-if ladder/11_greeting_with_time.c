#include<stdio.h>

int main()
{
    int hours;
    printf("enter the present hour(0-23): ");
    scanf("%d",&hours);
    if(hours>=0 && hours<12){
        printf("Good Morning\n");
    }
    else if(hours>=12 && hours<17){
        printf("Good Afternoon\n");
    }
    else if(hours>=17 && hours<21){
        printf("Good Evening\n");
    }
    else if(hours>=21 && hours<=23){
        printf("Good Night\n");
    }
    else{
        printf("Invalid hour entered\n");
    }
    return 0;
}