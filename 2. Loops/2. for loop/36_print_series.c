#include <stdio.h>
int main() {
    int n = 10;   
    int i;
    printf("Series: ");
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            printf("%d ", -i);
        else
            printf("%d ", i);
    }
    return 0;
}
