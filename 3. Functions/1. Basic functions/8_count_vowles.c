#include <stdio.h>
void countVowels(char str[]) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    printf("Number of vowels = %d", count);
}
int main() {
    char str[] = "Hello World";
    countVowels(str);
    return 0;
}