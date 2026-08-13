#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}
int (*getOperation(char choice))(int, int)
{
    if (choice == '+'){
        return add;
    }
    else{
        return multiply;
    }
}
int main()
{
    int (*operation)(int, int);
    operation = getOperation('+');
    printf("Result = %d\n", operation(10, 5));
    return 0;
}
