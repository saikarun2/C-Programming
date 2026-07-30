#include<stdio.h>
int main()
{
    int num;
    char grade;
    printf("enter the num value(1-3): ");
    scanf("%d",&num);
    printf("enter the grade of the student(A/B/C/D/F): ");
    scanf(" %c",&grade);
    printf("Demo 1: Multi-Case Grouping (Intentional Fall-Through) \n");
    switch (grade)
    {
    case 'A':
    case 'B':
    case 'C':
        printf("Qualified\n");
        break;
    case 'D':
    case 'E':
        printf("Failed\n");
    default:
        printf("Invalid grade\n");
    }
    printf("\nDemo 2: Sequential Execution Fall-Through \n");
    printf("Executing from case %d:\n", num);
    switch (num)
    {
    case 1:
        printf("Step 1 Executed\n");
    case 2: 
        printf("Step 2 Executed\n");
    case 3:
        printf("Step 3 Ececuted\n");
        break;
    default:
        printf("Default Step Executed\n");
    }
    return 0;
}