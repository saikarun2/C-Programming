#include <stdio.h>
int main() {
    int age;
    float height;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height (in cm): ");
    scanf("%f", &height);
    if (age >= 12) {
        if (height >= 120) {
            printf("Ticket Price: Rs. 500\n");
        } else {
            printf("Ticket Price: Rs. 300\n");
        }
    } else {
        if (height >= 120) {
            printf("Ticket Price: Rs. 250\n");
        } else {
            printf("Ticket Price: Rs. 150\n");
        }
    }
    return 0;
}