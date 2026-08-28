#include <stdio.h>
int main(void) {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (char *p = str; *p; ++p){
        if (*p == ' '){
            *p = '_';
        }
    }
    printf("%s", str);
    return 0;
}