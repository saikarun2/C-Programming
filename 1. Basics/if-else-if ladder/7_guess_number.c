#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int secretNumber, guess;
    srand(time(0));
    secretNumber = rand() % 50 + 1;   // Random number from 1 to 50
    printf("=== Guess the Number Game ===\n");
    do{
        printf("Enter your guess (1-50): ");
        scanf("%d", &guess);
        if (guess > secretNumber){
            printf("Too high!\n");
        }
        else if (guess < secretNumber){
            printf("Too low!\n");
        }
        else{
            printf("Congratulations! You guessed it!\n");
        }       
    } while (guess != secretNumber);
    return 0;
}