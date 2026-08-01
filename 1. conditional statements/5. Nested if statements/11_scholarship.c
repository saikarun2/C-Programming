#include <stdio.h>
int main() {
    float gpa;
    int activities;
    printf("Enter GPA: ");
    scanf("%f", &gpa);
    printf("Enter number of extracurricular activities: ");
    scanf("%d", &activities);
    if (gpa >= 3.5) {
        if (activities >= 2)
            printf("Eligible for Full Scholarship.\n");
        else
            printf("Eligible for Partial Scholarship.\n");
    } 
    else if (gpa >= 3.0) {
        if (activities >= 3)
            printf("Eligible for Partial Scholarship.\n");
        else
            printf("Not Eligible for Scholarship.\n");
    } 
    else {
        printf("Not Eligible for Scholarship.\n");
    }
    return 0;
}