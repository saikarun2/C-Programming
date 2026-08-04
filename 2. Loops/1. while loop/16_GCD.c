#include <stdio.h>
int main() {
    int num1, num2;
    int a, b, remainder;
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter numbers only.\n");
        return 1;
    }
    a = (num1 < 0) ? -num1 : num1;
    b = (num2 < 0) ? -num2 : num2;
    while (b != 0) {
        remainder = a % b;
        a = b;             
        b = remainder; 
    }
    printf("The GCD of %d and %d is: %d\n", num1, num2, a);
    return 0;
}
