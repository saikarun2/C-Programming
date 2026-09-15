#include <stdio.h>
int main() {
    char str[100];
    char *p;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    p = str;
    while (*p && *p != '\n'){
        p++;
    }
    printf("Length = %ld\n", p - str);
    return 0;
}
