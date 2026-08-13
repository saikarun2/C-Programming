#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}
int main()
{
    int a, b, choice;
    int (*operation[4])(int, int) = {
        add, subtract, multiply, divide
    };
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 4)
    {
        printf("Result = %d\n", operation[choice - 1](a, b));
    }
    else
    {
        printf("Invalid choice\n");
    }
    return 0;
}
