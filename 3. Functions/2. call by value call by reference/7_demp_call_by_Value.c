#include <stdio.h>
void changeValue(int x)
{
    x = 100;
    printf("inside function %d\n",x);
}
int main()
{
    int num = 50;
    printf("before function %d\n",num);
    changeValue(num);
    printf("before function %d\n",num);
    return 0;
}