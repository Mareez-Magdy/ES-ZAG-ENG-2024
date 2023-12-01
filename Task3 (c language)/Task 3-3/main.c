#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the power of a number");
    scanf("%d",&p);

    int result = 1;
    for(int i=0; i<p; i++){
        result *= n;
    }
    printf("The result is %d",result);
}
