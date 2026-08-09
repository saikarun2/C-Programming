#include <stdio.h>
int main() {
    int arr[] = {10, 25, 35, 42, 50, 70, 84};
    int n = 7;
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % 5 == 0 && arr[i] % 7 == 0) {
            printf("First number divisible by both 5 and 7: %d\n", arr[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No number found.\n");
    }
    return 0;
}