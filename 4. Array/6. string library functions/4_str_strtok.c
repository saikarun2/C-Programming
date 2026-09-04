#include <stdio.h>
#include <string.h>
int main(void)
{
    char sentence[] = "C programming is very easy";
    char *token;
    token = strtok(sentence, " ");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
