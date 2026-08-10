#include <stdio.h>
int power(int a, int n) {
    int result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result = result * a;
    }
    return result;
}
int main() {
    int a = 2, n = 5;
    printf("%d", power(a, n));
    return 0;
}