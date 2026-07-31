#include <stdio.h>
int main() {
    float distance, orderAmount, deliveryCharge;
    printf("Enter delivery distance (km): ");
    scanf("%f", &distance);
    printf("Enter order amount: ");
    scanf("%f", &orderAmount);
    if (orderAmount >= 1000) {
        deliveryCharge = 0;
    } else {
        if (distance <= 5)
            deliveryCharge = 30;
        else if (distance <= 10)
            deliveryCharge = 50;
        else
            deliveryCharge = 80;
    }
    printf("Delivery Charge = Rs. %.2f\n", deliveryCharge);
    printf("Total Amount = Rs. %.2f\n", orderAmount + deliveryCharge);
    return 0;
}