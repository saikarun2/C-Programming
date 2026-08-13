#include <stdio.h>
void count()
{
    static int n = 0;
    n++;
    printf("Count = %d\n", n);
}
int main()
{
    count();
    count();
    count();
    return 0;
}
