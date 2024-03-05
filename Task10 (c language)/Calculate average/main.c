#include <stdio.h>
#include <stdlib.h>

double Average(int arr[], int N) {

    if (N == 0) {
        return 0;
    }
    else{
        double sum = 0 ;
        for (int i = 0; i < N; i++){
            sum+=arr[i] ;
        }
        return sum / N;
    }
}

int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    double avr = Average(arr, N);

    printf("Average of array is: %2.6f\n", avr);

    return 0;
}
