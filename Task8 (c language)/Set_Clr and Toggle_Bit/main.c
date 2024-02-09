#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int var;
    printf("Enter the value /n");
    scanf("%i",&var);
    Set_Bit(var, 0);
    printf("After setting bit ,the value is : %i\n", var);
    Clr_Bit(var, 1);
    printf("After clearing bit ,the value is : %i\n", var);
    Toggle_Bit(var, 2);
    printf("After toggle bit ,the value is : %i\n", var);

    return 0;
}
