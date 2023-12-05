#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , bin;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("The binary of %d is: ",num);
    while (num >0) {
    bin = num % 2;
    printf("%d",bin);
    num /= 2;
   }

}
