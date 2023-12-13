#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int max , min ;
    printf("Enter the numbers\n");
    for(int i=0 ;i<10 ; i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(int i=0 ;i<10 ; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
        if(arr[i] <= min){
            min = arr[i];
        }
    }
    printf("The maximum value is : %d\n",max);
    printf("The minimum value is : %d\n",min);
    return 0;
}
