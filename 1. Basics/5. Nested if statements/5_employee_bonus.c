#include <stdio.h>
int main() {
    int performance, years;
    float salary, bonus;
    printf("Enter Employee Salary: ");
    scanf("%f", &salary);
    printf("Enter Performance Rating (1-5): ");
    scanf("%d", &performance);
    printf("Enter Years of Service: ");
    scanf("%d", &years);
    if (performance >= 4) {
        if (years >= 5) {
            bonus = salary * 0.20;  
        } else {
            bonus = salary * 0.10;   
        }
    } else {
        if (years >= 5) {
            bonus = salary * 0.05;   
        } else {
            bonus = 0;               
        }
    }
    printf("Employee Bonus = Rs. %.2f\n", bonus);
    return 0;
}