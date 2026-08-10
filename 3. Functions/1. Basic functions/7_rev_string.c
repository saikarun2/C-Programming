#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
    int i, length;
    length = strlen(str);
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}
int main() {
    char str[] = "Hello";
    reverseString(str);
    return 0;
}