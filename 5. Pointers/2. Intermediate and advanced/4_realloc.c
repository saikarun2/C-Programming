#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, new_n;
    printf("Enter initial size: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof *arr);
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter new size: ");
    scanf("%d", &new_n);
    int *temp = realloc(arr, new_n * sizeof *arr);
    if (temp == NULL) {
        printf("Memory reallocation failed.\n");
        free(arr);
        return 1;
    }
    arr = temp;
    if (new_n > n) {
        printf("Enter %d additional elements:\n", new_n - n);
        for (int i = n; i < new_n; i++){
            scanf("%d", &arr[i]);
        }
    }
    printf("Array after resizing:\n");
    for (int i = 0; i < new_n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
