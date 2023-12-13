#include <stdio.h>
#include <stdlib.h>

int main() {
    int n ;
    printf("Enter the number of integers\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integer values\n",n);
    for(int i =0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The reverse of array is:\n");
    for(int j = n-1; j >= 0; j--){
        printf("%d\n", arr[j]);
    }

    return 0;
}
