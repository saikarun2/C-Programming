#include <stdio.h>
void display(int n)
{
    printf("Number = %d\n", n);
}
void process(int n, void (*callback)(int))
{
    callback(n);
}
int main()
{
    process(11, display);
    return 0;
}
