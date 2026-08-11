#include <stdio.h>
void modifyElement(int *arr)
{
    arr[2] = 100;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    printf("The array before function\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    modifyElement(arr);
     printf("The array after function\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}