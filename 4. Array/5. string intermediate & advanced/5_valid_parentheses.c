#include <stdio.h>
#define MAX 1000
int main() {
    char str[MAX], stack[MAX];
    int top = -1;
    printf("ente the parenthese: ");
    fgets(str, MAX, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (top == -1) {
                printf("Invalid\n");
                return 0;
            }
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                printf("Invalid\n");
                return 0;
            }
        }
    }
    if (top == -1){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }
    return 0;
}
