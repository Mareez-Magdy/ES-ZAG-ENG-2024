#include <stdio.h>
#include <stdlib.h>


int main(){
    int A,B;
    printf("Enter number A");
    scanf("%d",&A);
    printf("Enter number B");
    scanf("%d",&B);
    printf("Numbers from%d to%d are\n",A,B);

    for(; A<=B; A++){
        printf("%d\n",A);
    }
}
