#include <stdio.h>
static int square(int n)
{
    return n * n;
}
void displaySquare(int n)
{
    printf("Square = %d\n", square(n));
}
int main()
{
    displaySquare(5);
    return 0;
}
