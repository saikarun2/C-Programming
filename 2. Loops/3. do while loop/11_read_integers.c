#include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &num);
        if (num != 0) {
            printf("You entered: %d\n", num);
        }
    } while (num != 0);
    printf("Program ended.\n");
    return 0;
}