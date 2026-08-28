#include <stdio.h>
int main(void) {
    char str[1000];
    int freq[256] = {0};
    int max = 0;
    unsigned char most;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            most = (unsigned char)i;
        }
    }
    if (max){
        printf("Most frequent character: %c\nFrequency: %d\n", most, max);
    }
    else{
        printf("String is empty\n");
    }
    return 0;
}