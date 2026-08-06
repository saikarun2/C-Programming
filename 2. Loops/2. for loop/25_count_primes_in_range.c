#include <stdio.h>
int main() {
    int start, end, i, j, count = 0, prime;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    for (i = start; i <= end; i++) {
        if (i < 2){
            continue;
        }
        if (i == 2) {
            count++;
            continue;
        }
        if (i % 2 == 0){
            continue;
        }
        prime = 1;
        for (j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime){
            count++;
        }
    }
    printf("Number of prime numbers = %d\n", count);
    return 0;
}