#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2 ,sum, sub;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result(num1, num2, &sum, &sub);

    printf("Summation is: %d\n", sum);
    printf("Subtraction is: %d\n", sub);

    return 0;
}
int result(int a, int b, int *sum, int *sub) {
    *sum = a + b;
    *sub = a - b;
}

