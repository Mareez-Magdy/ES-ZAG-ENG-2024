#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("Enter the number of integers\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integer values\n",n);
    for(int i =0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("The sum of integers are: %d\n", sum);

    return 0;
}
