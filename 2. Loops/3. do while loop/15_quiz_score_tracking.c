#include <stdio.h>

int main() {
    int choice, score = 0, question = 1;
    do {
        switch (question) {
            case 1:
                printf("\n1. What is the capital of India?\n");
                printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
                printf("Enter your answer: ");
                scanf("%d", &choice);
                if (choice == 2) {
                    printf("Correct!\n");
                    score++;
                } else {
                    printf("Wrong! Correct answer is Delhi.\n");
                }
                break;
            case 2:
                printf("2. Which language is used for system programming?\n");
                printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
                printf("Enter your answer: ");
                scanf("%d", &choice);
                if (choice == 1) {
                    printf("Correct!\n");
                    score++;
                } else {
                    printf("Wrong! Correct answer is C.\n");
                }
                break;
            case 3:
                printf("3. How many days are there in a week?\n");
                printf("1. 5\n2. 6\n3. 7\n4. 8\n");
                printf("Enter your answer: ");
                scanf("%d", &choice);
                if (choice == 3) {
                    printf("Correct!\n");
                    score++;
                } else {
                    printf("Wrong! Correct answer is 7.\n");
                }
                break;
        }
        question++;
    } while (question <= 3);
    printf("\nQuiz completed!\n");
    printf("Your score: %d/3\n", score);
    return 0;
}