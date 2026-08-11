#include <stdio.h>
void calculate(int a, int b, int *sum, int *difference)
{
    *sum = a + b;
    *difference = a - b;
}
int main()
{
    int a = 20, b = 10;
    int sum, difference;
    calculate(a, b, &sum, &difference);
    printf("%d %d", sum, difference);
    return 0;
}