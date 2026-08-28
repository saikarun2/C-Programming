#include <stdio.h>
#include <ctype.h>
int main(void) {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (!isdigit((unsigned char)str[i])) {
            printf("Not only digits");
            return 0;
        }
    }
    printf("Only digits");
    return 0;
}