#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Current value: %d\n", *ptr);
    ptr++;
    printf("After increment: %d\n", *ptr);
    ptr++;
    printf("After increment: %d\n", *ptr);
    ptr--;
    printf("After decrement: %d\n", *ptr);
    return 0;
}
