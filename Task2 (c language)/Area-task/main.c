#include <stdio.h>

int main()
{

    float pi = 3.14;
    float r,Area;
    printf("Enter the radius of the circle");
    scanf("%f",&r);
    if(r<0){
        printf("The radius of this circle is invalid ");
    }
    else {
        printf("The radius of the circle is %f\n" , r);
        float Area = (float)(pi* r * r);
        printf("The area of the circle is %f",Area);
    }

   return 0;
}

