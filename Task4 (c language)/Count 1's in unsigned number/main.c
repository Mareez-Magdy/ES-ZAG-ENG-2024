#include <stdio.h>
#include <stdlib.h>

int main(){
    int num , count=0;
    printf("Enter an unsigned number:");
    scanf("%d", &num);
    while (num > 0 ){
        if(num & 1 == 1)
        count ++;
        num >>=1;
    }
    printf("The number of 1's in the number is : %d  ", count);

    return 0;
}
