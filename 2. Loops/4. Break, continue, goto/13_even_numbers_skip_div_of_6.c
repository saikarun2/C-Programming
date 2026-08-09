#include <stdio.h>
int main() {
    int i;
    for (i = 2; i <= 30; i += 2) {
        if (i % 6 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}