#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

void displayBoard(char board[3][3]);
void playerInput(void);
void insertBoardData(int col, int row);

int main() {
    
    //Create tic tac toe board as a matrix of char
    //Make and display board in console
    //Prompt user for row and column for insertion of their char
    //Only allow characters to be entered in empty squares
    //Create a function that checks for a winner after every input
    //Create tic tac toe bot for player to play against

    char board[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
    bool winner = false;

    do
    {
        displayBoard(board);
        playerInput();
        winner = true;
    } while (!winner);
    
    return 0;
}

void playerInput() {
    int col = 0;
    int row = 0;

    do
    {
        printf("Enter column (#1-3): ");

        if (scanf("%d", &col) != 1) {
            // Input was not an integer
            printf("Invalid input. Please enter a number.\n");
            // Clear the input buffer
            while (getchar() != '\n'); 
        } else {
            // Input was successfully read
            printf("You entered: %d\n", col);
        }
    } while (col == 0);

    do
    {
        printf("\nEnter row (#1-3): ");
        
        if (scanf("%d", &row) != 1) {
            // Input was not an integer
            printf("Invalid input. Please enter a number.\n");
            // Clear the input buffer
            while (getchar() != '\n'); 
        } else {
            // Input was successfully read
            printf("You entered: %d\n", row);
        }
    } while (row == 0);
}

void displayBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if(i < 2) {
            printf("---|---|---\n");
        }
    }
}