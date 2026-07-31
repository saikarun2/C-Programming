#include <stdio.h>
int main() {
    float marks, attendance;
    printf("Enter marks: ");
    scanf("%f", &marks);
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    if (attendance < 75) {
        printf("Fail (Insufficient Attendance)\n");
    } else {
        if (marks >= 75)
            printf("Distinction\n");
        else if (marks >= 35)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}