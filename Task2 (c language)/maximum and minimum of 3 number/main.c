#include <stdio.h>

int main()
{
   int a,b,c,max,min;
   printf("enter three numbers");
   scanf("%d%d%d",&a,&b,&c);
           /* maximum number */

   if (a>b && a>c){
        max = a;
   }
   else if(b>a && b>c){
       max = b;
   }
   else(
         max = c;
   }
      printf ("\n The maximum number is %d",max);

             /* minimum number */
   if (a<b && a<c){
         min = a;
   }
   else if (b<a && b<c){
         min = b;
   }
   else{
         min = c;
   }
   printf ("\n The minimum number is %d",min);
   return 0;
}
