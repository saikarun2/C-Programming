#include <stdio.h>
int main() {
    int base, power, result = 1;
    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);
    for (int i = 1; i <= power; i++) {
        result = result * base;
    }
    printf("%d ^ %d = %d\n", base, power, result);
    return 0;
}