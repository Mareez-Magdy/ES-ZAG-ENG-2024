#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,num,max,min,count;
   printf("Enter numbers of numbers");
   scanf("%d",&n);
   for(count =1 ;count<=n; count++){
        max = num;
       printf("Enter number %d: ",count);
       scanf("%d",&num);
       if (num > max) {
            max = num;
        }
       if (num < min) {
            min = num;
        }
   }

   printf ("\n The maximum number is %d",max);
   printf ("\n The minimum number is %d",min);
   return 0;
}

