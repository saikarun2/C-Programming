#include <stdio.h>
int main() {
    int age;
    char showtime;
    float ticketPrice = 200;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter showtime (M = Morning, E = Evening): ");
    scanf(" %c", &showtime);
    if (age < 12) {
        ticketPrice *= 0.5;
    } else if (age >= 60) {
        ticketPrice *= 0.7;
    }
    if (showtime == 'M' || showtime == 'm') {
        ticketPrice -= 20;
    }
    printf("\nTicket Price = Rs. %.2f\n", ticketPrice);
    return 0;
}