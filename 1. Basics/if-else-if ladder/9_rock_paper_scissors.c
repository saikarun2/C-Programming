#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int userChoice, computerChoice;
    printf("=== Rock, Paper, Scissors Game ===\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);
    if (userChoice < 1 || userChoice > 3){
        printf("Invalid choice!\n");
        return 0;
    }
    srand(time(0));
    computerChoice = rand() % 3 + 1;
    printf("\nComputer chose: ");
    if (computerChoice == 1){
        printf("Rock\n");
    }
    else if (computerChoice == 2){
        printf("Paper\n");
    }
    else{
        printf("Scissors\n");
    }
    if (userChoice == computerChoice){
        printf("Result: It's a Draw!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)){
        printf("Result: You Win!\n");
    }
    else{
        printf("Result: Computer Wins!\n");
    }
    return 0;
}