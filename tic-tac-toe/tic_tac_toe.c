#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

bool updateBoard(bool isPlayersTurn, int coordinates[2], char board[3][3]);
int checkForWinner(char board[3][3]);
void playerInput(int coordinates[2]);
void displayBoard(char board[3][3]);
int checkDiagonal(char board[3][3]);
int checkColumns(char board[3][3]);
int checkRows(char board[3][3]);

int main() {
    char board[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
    bool validMove = true;
    bool gameOver = false;
    int turnsMade = 0;
    int coordinates[2];
    int winner = -1;

    do
    {
        printf("--------------------------");
        printf("\nPlayer 1 it's your turn!\n");
        printf("--------------------------\n");

        do
        {
            if(!validMove) {
                printf("-----------------------------------------------------------");
                printf("\nYour move was not in an empty square, please try again!\n");
                printf("-----------------------------------------------------------\n");
            }
            displayBoard(board);
            playerInput(coordinates);
            validMove = updateBoard(true, coordinates, board);

        } while (!validMove);

        turnsMade++;

        winner = checkForWinner(board);

        if(winner != -1 || turnsMade == 9) { break; }

        coordinates[0] = 0;
        coordinates[1] = 0;

        printf("--------------------------");
        printf("\nPlayer 2 it's your turn!\n");
        printf("--------------------------\n");

         do
        {
            if(!validMove) {
                printf("-----------------------------------------------------------");
                printf("\nYour move was not in an empty square, please try again!\n");
                printf("-----------------------------------------------------------\n");
            }
            displayBoard(board);
            playerInput(coordinates);
            validMove = updateBoard(false, coordinates, board);

        } while (!validMove);

        turnsMade++;

        if(turnsMade == 9) { break; }

        winner = checkForWinner(board);
    } while (winner == -1);

    if(winner == -1) {
        printf("\nNOBODY WON WOMP WOMP\n");
    } else if(winner == 0) {
        printf("\nGOOD JOB PLAYER ONE YOU DID A THING\n");
    } else {
        printf("\nGOOD JOB PLAYER 2 YOU DID A THING\n");
    }
    
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
        printf("Enter row (#1-3): ");

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
        printf("\nEnter column (#1-3): ");
        
        if (scanf("%d", &coordinates[1]) != 1) {
            printf("Invalid input. Please enter a number (#1-3).\n");
            while (getchar() != '\n'); // Clear the input buffer 
        } else if(coordinates[1] > 3 || coordinates[1] < 1) {
            coordinates[1] = 0;
            printf("Please enter a valid number (#1-3).\n");
        }
    } while (coordinates[1] == 0);
}

bool updateBoard(bool isPlayerOneTurn, int coordinates[2], char board[3][3]) {

    if(board[coordinates[0] - 1][coordinates[1] - 1] != ' ') {
        return false;
    }

    if(isPlayerOneTurn) {
        board[coordinates[0] - 1][coordinates[1] - 1] = 'X';
    } else {
        board[coordinates[0] - 1][coordinates[1] - 1] = 'O';
    }

    return true;
}

int checkForWinner(char board[3][3]) {
    int winner = -1;

    winner = checkRows(board);
    if(winner != -1) {return winner;}

    winner = checkColumns(board);
    if(winner != -1) {return winner;}

    winner = checkDiagonal(board);
    if(winner != -1) {return winner;}

    return winner;
}

int checkDiagonal(char board[3][3]) {
    if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
        return 0;
    } else if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
        return 1;
    } else if(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') {
        return 0;
    } else if(board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
        return 1;
    }

    return -1;
}

int checkColumns(char board[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        int xCount = 0;
        int oCount = 0;

        for(int j = 0; j < 3; j++) {
            if(board[j][i] == 'X') {
                xCount++;
            } else if(board[j][i] == 'O') {
                oCount++;
            } 
        }

        if(xCount == 3) {
            return 0;
        }

        if(oCount == 3) {
            return 1;
        }
    }

    return -1;
}

int checkRows(char board[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        int xCount = 0;
        int oCount = 0;

        for(int j = 0; j < 3; j++) {
            if(board[i][j] == 'X') {
                xCount++;
            } else if(board[i][j] == 'O') {
                oCount++;
            } 
        }

        if(xCount == 3) {
            return 0;
        }

        if(oCount == 3) {
            return 1;
        }
    }

    return -1;
}