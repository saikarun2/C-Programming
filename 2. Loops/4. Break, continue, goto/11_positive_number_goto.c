#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num <= 0) {
        goto error;
    }
    printf("Valid number: %d\n", num);
    return 0;
error:
    printf("Error: Please enter a positive number.\n");
    return 0;
}