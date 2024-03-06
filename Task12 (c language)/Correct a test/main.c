#include <stdio.h>
#include <stdlib.h>

void readAnswers(char answers[]) {

    printf("Enter the correct answers:\n");

    for (int i = 0; i < 25; i++) {

        scanf(" %c", &answers[i]);
    }
}

void readResponses(char responses[][25]) {

    for (int i = 0; i < 3; i++) {
        printf("Enter the responses for student %d:\n", i+1);

        for (int j = 0; j < 25; j++) {
            scanf(" %c", &responses[i][j]);
        }
    }
}

int countCorrectAnswers(char answers[], char responses[]) {
    int count = 0;
    for (int i = 0; i < 25; i++) {
        if (answers[i] == responses[i]) {
            count++;
        }
    }
    return count;
}

 int numWrongAnswers(char answers[], char responses[]) {
    int wrong = 0;
        printf("\n Wrong questions are : \n");
    for (int i = 0; i < 25 ; i++) {
        if (answers[i] != responses[i]) {
            wrong++;
        printf("%d ,  ",i++);
        }
    }
    return wrong ;
}

void printResults(int student, int correctCount) {
    printf("/nStudent %d: \n Score is %d out of 25\n", student, correctCount);
}


int main() {
    char correct[25];
    char studentResponses[3][25];

    readAnswers(correct);
    readResponses(studentResponses);

    for (int i = 0; i < 3; i++) {
        int correctCount = countCorrectAnswers(correct, studentResponses[i]);
        printResults(i + 1, correctCount);

        int wrongCount = numWrongAnswers(correct, studentResponses[i]);

    }

    return 0;
}
