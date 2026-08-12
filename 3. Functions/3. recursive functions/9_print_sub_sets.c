#include <stdio.h>
void printSubsets(int arr[], int n, int index, int subset[], int size)
{
    if (index == n) {
        printf("{ ");
        for (int i = 0; i < size; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    }
    printSubsets(arr, n, index + 1, subset, size);
    subset[size] = arr[index];
    printSubsets(arr, n, index + 1, subset, size + 1);
}
int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    int subset[3];
    printSubsets(arr, n, 0, subset, 0);
    return 0;
}