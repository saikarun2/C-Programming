#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the numbers of a and b: ");
    scanf("%d %d",&a,&b);
    char ch;
    printf("enter the operator you want to perform(+,-,/,*,%%): ");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    case '%':
        printf("%d",a%b);
        break;
    
    default:
        printf("enter the valid operator\n");
    }
    return 0;
}