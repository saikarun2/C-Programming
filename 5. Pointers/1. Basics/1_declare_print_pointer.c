#include <stdio.h>
int main()
{
    int x = 10;
    int *p = &x;
    printf("Address: %p\n", (void *)p);
    printf("Value: %d\n", *p);
    return 0;
}
