#include <stdio.h>
int main() {
    int num;
    printf("Enter a number (1-10): ");
    scanf("%d", &num);
    if (num == 1) {
        printf("Roman numeral: I\n");
    }
    else if (num == 2) {
        printf("Roman numeral: II\n");
    }
    else if (num == 3) {
        printf("Roman numeral: III\n");
    }
    else if (num == 4) {
        printf("Roman numeral: IV\n");
    }
    else if (num == 5) {
        printf("Roman numeral: V\n");
    }
    else if (num == 6) {
        printf("Roman numeral: VI\n");
    }
    else if (num == 7) {
        printf("Roman numeral: VII\n");
    }
    else if (num == 8) {
        printf("Roman numeral: VIII\n");
    }
    else if (num == 9) {
        printf("Roman numeral: IX\n");
    }
    else if (num == 10) {
        printf("Roman numeral: X\n");
    }
    else {
        printf("Invalid input! Enter a number between 1 and 10.\n");
    }
    return 0;
}