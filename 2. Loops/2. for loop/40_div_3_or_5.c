#include <stdio.h>
int main() {
    int i;
    printf("Numbers divisible by 3 or 5 but not both:\n");
    for (i = 1; i <= 100; i++) {
        if ((i % 3 == 0 && i % 5 != 0) || 
            (i % 5 == 0 && i % 3 != 0)) {
            printf("%d ", i);
        }
    }
    return 0;
}
