#include <stdio.h>
int main() {
    int age, creditScore;
    float income;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%d", &creditScore);
    if (age >= 21 && age <= 60) {
        if (income >= 30000 && creditScore >= 750)
            printf("Eligible for Loan\n");
        else if (income >= 20000 && creditScore >= 650)
            printf("Eligible for Loan with Conditions\n");
        else
            printf("Not Eligible for Loan\n");
    } else {
        printf("Not Eligible for Loan (Age Criteria Not Met)\n");
    }
    return 0;
}