#include<stdio.h>
int main()
{
    int mon;
    printf("enter the month as number (1-12): ");
    scanf("%d",&mon);
    switch (mon)
    {
    case 1:
        printf("Jan\n");
        break;
    case 2: 
        printf("Feb\n");
        break;
    case 3: 
        printf("March\n");
        break;
    case 4: 
        printf("April\n");
        break;
    case 5: 
        printf("May\n");
        break;
    case 6: 
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("Aug\n");
        break;
    case 9: 
        printf("Sept\n");
        break;
    case 10: 
        printf("Oct\n");
        break;
    case 11: 
        printf("Nov\n");
        break;
    case 12: 
        printf("Dec\n");
        break;
    default:
        printf("enter the valid Month number\n");
    }
    return 0;
}