#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char str[1000];
    int consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);
        if (ch >= 'a' && ch <= 'z' &&
            ch != 'a' && ch != 'e' &&
            ch != 'i' && ch != 'o' &&
            ch != 'u') {
            consonants++;
        }
    }
    printf("Number of consonants: %d\n", consonants);
    return 0;
}
