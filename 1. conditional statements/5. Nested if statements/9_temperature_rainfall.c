#include <stdio.h>
int main() {
    float temperature;
    char rain;
    printf("Enter temperature (C): ");
    scanf("%f", &temperature);
    printf("Is it raining? (Y/N): ");
    scanf(" %c", &rain);
    if (temperature >= 30) {
        if (rain == 'Y' || rain == 'y')
            printf("Wear light clothes and carry a raincoat or umbrella.\n");
        else
            printf("Wear light cotton clothes.\n");
    } 
    else if (temperature >= 20) {
        if (rain == 'Y' || rain == 'y')
            printf("Wear comfortable clothes with a raincoat.\n");
        else
            printf("Wear casual comfortable clothes.\n");
    } 
    else {
        if (rain == 'Y' || rain == 'y')
            printf("Wear warm clothes with a waterproof jacket.\n");
        else
            printf("Wear warm clothes or a sweater.\n");
    }
    return 0;
}