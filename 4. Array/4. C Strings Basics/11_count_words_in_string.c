#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char sentence[1000];
    int words = 0, in_word = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isspace((unsigned char)sentence[i])) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }
    printf("Number of words: %d\n", words);
    return 0;
}
