#include <stdio.h>
int main() {
    char str[] = "C programming is easy";
    int i, words = 1;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            words++;
    }
    printf("Sentence: %s\n", str);
    printf("Number of words = %d\n", words);
    return 0;
}