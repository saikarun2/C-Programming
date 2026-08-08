#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int dice;
    srand(time(0));
    do {
        dice = (rand() % 6) + 1;
        printf("You rolled: %d\n", dice);
    } while (dice != 6);
    printf("You rolled a 6! Game over.\n");
    return 0;
}