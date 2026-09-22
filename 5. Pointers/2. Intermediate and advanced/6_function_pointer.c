#include <stdio.h>
void greet()
{
    printf("Hello from function pointer!\n");
}
int main()
{
    void (*fp)(void) = greet;
    fp();
    return 0;
}
