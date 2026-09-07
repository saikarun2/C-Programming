#include <stdio.h>
int main(void)
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
