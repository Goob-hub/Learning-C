#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct
{
    char question[60];
    char A[60];
    char B[60];
    char C[60];
    char D[60];
    char correctAnswer;
} quizQuestion;

bool askQuestion(quizQuestion question);

int main() {
    quizQuestion question1 = {"How many years has it been since 2008?", "12", "5", "7", "16", 'D'};
    quizQuestion question2 = {"What month is christmas in?", "October", "June", "December", "May", 'C'};
    quizQuestion question3 = {"How many calories does a small apple contain?", "77 calories", "116 calories", "95 calories", "69 calories", 'A'};
    quizQuestion quiz[] = {question1, question2, question3};
    int questionCount = 3;
    int curQuestion = 1;
    int score = 0;

    do
    {
        bool isCorrect = askQuestion(quiz[curQuestion - 1]);

        if(isCorrect) {
            score++;
        }

        curQuestion++;
    } while (curQuestion <= questionCount);

    printf("You correctly answered %d out of %d questions!", score, questionCount);
    
    return 0;
}

bool askQuestion(quizQuestion question) {
    char guessedAnswer;

    printf("\n%s\nA:%s\nB:%s\nC:%s\nD:%s\n", question.question, question.A, question.B, question.C, question.D);
    scanf(" %c", &guessedAnswer);
    
    if(isalpha(guessedAnswer) && toupper(guessedAnswer) == question.correctAnswer) {
        return true;
    } else {
        return false;
    }
}