#include <stdio.h>
int main()
{
    int x = 10;
    int *p = &x;
    int **pp = &p;
    printf("Value of x: %d\n", x);
    printf("Using pointer: %d\n", *p);
    printf("Using double pointer: %d\n", **pp);
    return 0;
}
