#include <stdio.h>
#include <stdlib.h>


int main(){
    int rows,x;
    x=1;
    printf("Enter the number of rows of Floyd's triangle");
    scanf("%d",&rows);
    printf("rows=%d",rows);
    for(int i=0; i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("%d",x);
            x++;
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
