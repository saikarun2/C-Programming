#include <stdio.h>
int findGCD(int a, int b) {
    int remainder;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int main() {
    int a = 24, b = 36;
    printf("%d", findGCD(a, b));
    return 0;
}