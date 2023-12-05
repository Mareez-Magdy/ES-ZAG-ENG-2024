#include <stdio.h>
#include <stdlib.h>

int main(){

    int num ,dig ;
    int rev ;
    printf("enter the number \n");
    scanf("%d" , &num);
    while (num!=0){
       dig = num%10 ;
       rev = rev*10+dig;
       num = (num/10);
       printf("%d",dig);
    }
    }
