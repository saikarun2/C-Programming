#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }
    int *arr = malloc((size_t)n * sizeof *arr);
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
    printf("Elements: ");
    for (int i = 0; i < n; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    arr = NULL;
    return 0;
}