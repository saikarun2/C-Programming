#include <stdio.h>
typedef int (*Operation)(int, int);
int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}
int main()
{
    Operation operation;
    operation = add;
    printf("Addition = %d\n", operation(10, 5));
    operation = multiply;
    printf("Multiplication = %d\n", operation(10, 5));
    return 0;
}
