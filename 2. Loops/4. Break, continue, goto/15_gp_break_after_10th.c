#include <stdio.h>
int main() {
    int i = 1;
    float first, ratio, term;
    printf("Enter the first term: ");
    scanf("%f", &first);
    printf("Enter the common ratio: ");
    scanf("%f", &ratio);
    term = first;
    while (1) {
        printf("%.2f ", term);

        if (i == 10) {
            break;
        }
        term = term * ratio;
        i++;
    }
    return 0;
}