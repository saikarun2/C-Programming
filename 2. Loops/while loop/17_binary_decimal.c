#include <stdio.h>
int main() {
    char binary[65]; 
    int i = 0;
    long long decimal = 0;
    printf("Enter a binary number: ");
    if (scanf("%64s", binary) != 1) {
        printf("Error reading input.\n");
        return 1;
    }
    while (binary[i] != '\0') {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Error: Invalid binary digit '%c' detected.\n", binary[i]);
            return 1;
        }
        decimal = (decimal * 2) + (binary[i] - '0');
        i++;
    }
    printf("The decimal equivalent is: %lld\n", decimal);
    return 0;
}
