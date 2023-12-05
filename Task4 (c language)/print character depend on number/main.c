#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   char charchter;
   printf("Enter the number ");
   scanf("%d",&num);
   printf("Enter the charchter ");
   scanf(" %c",&charchter);
     /*number is even*/
   if(num%2==0){
    printf("The charchter is: %c\n",charchter);
   }
     /*number is odd*/
   else{
        if (charchter >= 'a' && charchter <= 'z') {
            charchter -= 32;
        }
        else if (charchter >= 'A' && charchter <= 'Z') {
            charchter += 32;
        }
        printf("The charchter is: %c",charchter);

   }
}
