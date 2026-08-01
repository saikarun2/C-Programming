#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b) {
        if (b <= c) {
            printf("Ascending Order: %d %d %d\n", a, b, c);
        } else {
            if (a <= c)
                printf("Ascending Order: %d %d %d\n", a, c, b);
            else
                printf("Ascending Order: %d %d %d\n", c, a, b);
        }
    } else {
        if (a <= c) {
            printf("Ascending Order: %d %d %d\n", b, a, c);
        } else {
            if (b <= c)
                printf("Ascending Order: %d %d %d\n", b, c, a);
            else
                printf("Ascending Order: %d %d %d\n", c, b, a);
        }
    }
    return 0;
}