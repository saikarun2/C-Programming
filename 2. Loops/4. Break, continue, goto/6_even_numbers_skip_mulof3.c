#include <stdio.h>
int main() {
    int num = 2, count = 0;
    while (count < 10) {
        if (num % 3 == 0) {
            num += 2;
            continue;
        }
        printf("%d ", num);
        count++;
        num += 2;
    }
    return 0;
}