#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr[] = {&a, &b, &c};
    for (size_t i = 0; i < sizeof(ptr) / sizeof(ptr[0]); ++i){
        printf("%d ", *ptr[i]);
    }
    return 0;
}
