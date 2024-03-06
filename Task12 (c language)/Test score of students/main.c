#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int score;
} Student;

int main() {
    Student students[5];
    int numStudents;


    int test ,i = 0 ;
    do{
        numStudents = i;
        printf("Enter student %d name : ", i+1 );
        scanf("%s", students[i].name);

        printf("Enter student %d score : ", i+1 );
        scanf("%d", &students[i].score);

        printf("More data ? -1 to stop ,others to continue ");
        scanf("%d", &test);
       i++ ;

    }while (test != 1);
    int totalScore = 0;
    for (int i = 0; i < numStudents; i++) {
        totalScore += students[i].score;
    }
    double avr = (double) totalScore / numStudents;


    printf("\n =======================REPORT===========================\n");

    printf("\n Student Name \t\t Score \n");
    printf(" ------------ \t\t ----- \n");

    for (int i = 0; i <= numStudents; i++) {
        printf("     %s  \t\t  %d \n",students[i].name ,students[i].score );
    }

    printf("The number of student is : %d\n",i);
    printf("The Average score for this class is : %.2f\n", avr);

    printf("\n ======================================================\n");

    printf("Below The Average Students ! Work Harder !");

    printf("\n ======================================================\n");

    printf("\n Student Name \t\t Score \n");
    printf(" ------------ \t\t ----- \n");
    for (int i = 0; i < numStudents; i++) {
        if (students[i].score < avr) {
            printf("     %s  \t\t  %d \n", students[i].name , students[i].score);

        }
    }

    int highestScore = students[0].score;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].score > highestScore) {
            highestScore = students[i].score;
        }
    }

     printf("\n ======================================================\n");

     printf("Top Scorer Student ! congratulation !");

     printf("\n ======================================================\n");

    for (int i = 0; i < numStudents; i++) {
        if (students[i].score == highestScore) {
        printf("\n Student Name \t\t Score \n");
        printf(" ------------ \t\t ----- \n");
        printf("      %s  \t\t  %d\n",students[i].name ,highestScore);
        }
    }

    return 0;
}
