#include <stdio.h>
int globalVar = 10;
static int staticVar = 20;
void display()
{
    printf("Global variable = %d\n", globalVar);
    printf("Static variable = %d\n", staticVar);
}
int main()
{
    display();
    globalVar++;
    staticVar++;
    display();
    return 0;
}
