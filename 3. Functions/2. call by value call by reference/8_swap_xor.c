#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int a = 10;
    int b = 20;
    printf("before function %d %d\n",a,b);
    swap(&a, &b);
    printf("after function %d %d\n",a,b);
    return 0;
}