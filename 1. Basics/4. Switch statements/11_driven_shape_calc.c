#include <stdio.h>
#define PI 3.14159
int main() {
    int choice;
    float radius, length, width, side, base, height, area;
    do {
        printf("       SHAPE AREA CALCULATOR       \n");
        printf("1. Calculate Area of a Circle\n");
        printf("2. Calculate Area of a Rectangle\n");
        printf("3. Calculate Area of a Square\n");
        printf("4. Calculate Area of a Triangle\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter the radius of the circle: ");
                scanf("%f", &radius);
                area = PI * radius * radius;
                printf("Area of the Circle = %.2f\n", area);
                break;
            case 2:
                printf("\nEnter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                area = length * width;
                printf("Area of the Rectangle = %.2f\n", area);
                break;
            case 3:
                printf("\nEnter the side length of the square: ");
                scanf("%f", &side);
                area = side * side;
                printf("Area of the Square = %.2f\n", area);
                break;
            case 4:
                printf("\nEnter the base of the triangle: ");
                scanf("%f", &base);
                printf("Enter the height of the triangle: ");
                scanf("%f", &height);
                area = 0.5 * base * height;
                printf("Area of the Triangle = %.2f\n", area);
                break;
            case 5:
                printf("\nExiting the program. Goodbye!\n");
                break;
            default:
                printf("\nError: Invalid choice! Please select an option between 1 and 5.\n");
        }
    } while (choice != 5); // Loop repeats until the user chooses to exit
    return 0;
}
