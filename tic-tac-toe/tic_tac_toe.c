#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

void updateBoard(bool isPlayersTurn, int coordinates[2], char board[3][3]);
void playerInput(int coordinates[2]);
void displayBoard(char board[3][3]);

int main() {
    
    //Create tic tac toe board as a matrix of char
    //Make and display board in console
    //Prompt user for row and column for insertion of their char
    
    //Only allow characters to be entered in empty squares
    //Create a function that checks for a winner after every input
    //Create tic tac toe bot for player to play against

    char board[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
    int coordinates[2];
    bool winner = false;

    do
    {
        displayBoard(board);
        playerInput(coordinates);
        updateBoard(true, coordinates, board);
        //Bot logic function
        //update board for bot
        //Check for winner
        winner = true;
    } while (!winner);
    
    return 0;
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

void playerInput(int coordinates[2]) {
    do
    {
        printf("Enter column (#1-3): ");

        if (scanf("%d", &coordinates[0]) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear the input buffer 
        } else if(coordinates[0] > 3 || coordinates[0] < 1) {
            coordinates[0] = 0;
            printf("Please enter a valid number (#1-3).\n");
        }
    } while (coordinates[0] == 0);

    do
    {
        printf("\nEnter row (#1-3): ");
        
        if (scanf("%d", &coordinates[1]) != 1) {
            printf("Invalid input. Please enter a number (#1-3).\n");
            while (getchar() != '\n'); // Clear the input buffer 
        } else if(coordinates[1] > 3 || coordinates[1] < 1) {
            coordinates[1] = 0;
            printf("Please enter a valid number (#1-3).\n");
        }
    } while (coordinates[1] == 0);
}

void updateBoard(bool isPlayersTurn, int coordinates[2], char board[3][3]) {
    if(isPlayersTurn) {
        board[coordinates[0] - 1][coordinates[1] - 1] = 'X';
    } else {
        board[coordinates[0] - 1][coordinates[1] - 1] = 'O';
    }
}