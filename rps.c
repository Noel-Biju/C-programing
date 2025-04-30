#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int userChoice, computerChoice;
    srand(time(0));
    computerChoice = rand() % 3;
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose an option:\n");
    printf("0: Rock\n1: Paper\n2: Scissors\n");
    printf("Your choice: ");
    scanf("%d", &userChoice);
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please run the game again.\n");
        return 1;
    }
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

