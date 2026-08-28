#include <stdio.h>
int main(void) {
    char str[1000];
    int num = 0, sign = 1, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] == ' ' || str[i] == '\t'){
        i++;
    }
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-'){
            sign = -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    printf("Integer: %d\n", num * sign);
    return 0;
}