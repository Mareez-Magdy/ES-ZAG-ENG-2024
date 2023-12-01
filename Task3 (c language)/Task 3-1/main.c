#include <stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter five numbers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf ("\n The numbers that are divisible by three ");

    if(a%3 == 0){
        printf("\n number %d",a);
    }
    if(b%3 == 0){
        printf("\n number %d",b);
    }
    if(c%3 == 0){
        printf("\n number %d",c);
    }
    if(d%3 == 0){
        printf("\n number %d",d);
    }
    if(e%3 == 0){
        printf("\n number %d",e);
    }



}
