#include <stdio.h>
#include <stdlib.h>
int main()
{
    size_t n;
    int *arr;
    printf("Enter array size: ");
    if (scanf("%zu", &n) != 1 || n == 0){
        return 1;
    }
    arr = malloc(n * sizeof *arr);
    if (arr == NULL) {
        perror("malloc");
        return 1;
    }
    printf("Enter %zu elements:\n", n);
    for (size_t i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for (size_t i = 0; i < n; ++i){
        printf("%d ", arr[i]);
    }
    putchar('\n');
    free(arr);
    return 0;
}
