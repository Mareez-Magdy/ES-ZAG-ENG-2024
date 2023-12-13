#include <stdio.h>
#include <stdlib.h>
int main()
{
    int classA[] = {23,87,32,65,58,100,44,98,12,56};
    int classB[] = {56,28,55,25,65,94,62,40,37,39};
    int classC[] = {36,15,53,27,23,67,99,49,73,92};

    //Finding passed students
    int passA = 0;
    int passB = 0;
    int passC = 0;
    for (int i = 0; i < 10; i++){
        if(classA[i] >= 50){
            passA++;
        }
        if(classB[i] >= 50){
            passB++;
        }
        if(classC[i] >= 50){
            passC++;
        }
    }
    int passed = passA + passB + passC;
    printf("The number of passed students: %d\n", passed);

    //Finding failed students
    int failA = 0;
    int failB = 0;
    int failC = 0;
    for (int i = 0; i < 10; i++){
        if(classA[i] < 50){
            failA++;
        }
        if(classB[i] < 50){
            failB++;
        }
        if(classC[i] < 50){
            failC++;
        }
    }
    int failed = failA + failB + failC;
    printf("The number of failed students: %d\n", failed);

    // Finding the highest grade in the classes
    int maxA = classA[0];
    int maxB = classB[0];
    int maxC = classC[0];

    for(int i = 0; i < 10; i++){
        if(classA[i] > maxA){
            maxA = classA[i];
        }
        if(classB[i] > maxB){
            maxB = classB[i];
        }
        if(classC[i] > maxC){
            maxC = classC[i];
        }
    }

    int max;
    if((maxA > maxB)&&(maxA > maxC)){
        max = maxA;
        }
    else if((maxB > maxA)&&(maxB > maxC)){
        max = maxB;
        }
     else{
        max = maxC;
     }
    printf("The highest grade is: %d\n", max);

    // Finding the lowest grade in the classes
    int minA = classA[0];
    int minB = classB[0];
    int minC = classC[0];

    for(int i = 0; i < 10; i++){
        if(classA[i] < minA){
            minA = classA[i];
        }
        if(classB[i] < minB){
            minB = classB[i];
        }
        if(classC[i] < minC){
            minC = classC[i];
        }
    }

    int min;
    if((minA < minB)&&(minA < minC)){
        min = minA;
        }
    else if((minB < minA)&&(minB < minC)){
        min = minB;
        }
     else{
        min = minC;
     }
    printf("The lowest grade is: %d\n", min);

    //Finding average
    float countA = 0;
    float countB = 0;
    float countC = 0;
    for (int i = 0; i < 10; i++){
        countA += classA[i];
        countB += classB[i];
        countC += classC[i];
    }
    float avgA = countA / 10;
    printf("The average in first class is: %f\n", avgA);

    float avgB = countB / 10;
    printf("The average in second class is: %f\n", avgB);

    float avgC = countC / 10;
    printf("The average in third class is: %f\n", avgC);

    float totalavg = avgA + avgB + avgC;
    printf("The total average is: %f\n", totalavg);

    return 0;
}
