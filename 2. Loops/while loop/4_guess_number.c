#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int guess;
    int randomNumber;
    srand(time(NULL));
    randomNumber = rand() % 100 + 1;
    printf("Number Guessing Game\n");
    printf("Guess a number between 1 and 100\n");
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess == randomNumber) {
            printf("You guessed the correct number.\n");
            break;
        } else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }
    return 0;
}