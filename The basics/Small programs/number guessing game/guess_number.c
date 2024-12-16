#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNum(int max, int offset);

int main() {
    const int MIN = 1;
    const int MAX = 100;
    int guessesLeft = 10;
    int answer = randomNum(MAX, 0);

    int input;

    printf("\nI have chosen a random number between 1 and 100!");

    do
    {
        printf("\nYou have %d guesses left!", guessesLeft);
        scanf("%d", &input);

        if(input == answer) {
            printf("\nYou have guessed correctly, you win!");
            break;
        } else if(input < answer){
            printf("\nYou have guessed incorrectly! Try guessing a larger number!");
        } else if(input > answer) {
            printf("\nYou have guessed incorrectly! Try guessing a lower number!");
        }

        guessesLeft--;
        
        if(guessesLeft <= 0) {
            printf("\nYou ran out of guesses, you lose! The number was %d", answer);
            break;
        }
    } while (guessesLeft > 0);
    
    return 0;
}

int randomNum(int max, int offset) {
    srand(time(0));
    return (rand() % max) + offset;
}