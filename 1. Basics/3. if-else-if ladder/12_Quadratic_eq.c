#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, root1, root2, realPart, imagPart;
    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct real roots:\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Two equal real roots:\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Complex roots:\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }
    return 0;
}