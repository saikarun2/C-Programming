#include <stdio.h>
int main() {
    float budget, distance;
    printf("Enter your budget (Rs.): ");
    scanf("%f", &budget);
    printf("Enter travel distance (km): ");
    scanf("%f", &distance);
    if (budget >= 100000) {
        if (distance > 100)
            printf("Recommended Vehicle: Car\n");
        else
            printf("Recommended Vehicle: Motorcycle\n");
    }
    else if (budget >= 10000) {
        if (distance > 20)
            printf("Recommended Vehicle: Motorcycle\n");
        else
            printf("Recommended Vehicle: Scooter\n");
    }
    else {
        if (distance <= 5)
            printf("Recommended Vehicle: Bicycle\n");
        else
            printf("Recommended Vehicle: Public Transport\n");
    }
    return 0;
}