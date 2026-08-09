#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target, i;
    int found = 0;
    printf("Enter the target: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Target found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Target not found.\n");
    }
    return 0;
}