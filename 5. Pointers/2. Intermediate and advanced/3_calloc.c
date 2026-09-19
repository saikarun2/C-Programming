#include <stdio.h>
#include <stdlib.h>
int main()
{
    size_t n = 5;
    int *arr = calloc(n, sizeof *arr);
    if (arr == NULL) {
        perror("calloc");
        return EXIT_FAILURE;
    }
    printf("Elements after calloc():\n");
    for (size_t i = 0; i < n; ++i){
        printf("arr[%zu] = %d\n", i, arr[i]);
    }
    free(arr);
    return EXIT_SUCCESS;
}
