#include <stdio.h>
#include <stdlib.h>

enum Month {
    jan = 1,
    feb,
    mars,
    aprl,
    may,
    june,
    july,
    aut,
    sep,
    oct,
    nov,
    dec
};

int main() {
    printf("The values are:\n");
    printf("January  = %d\n", jan);
    printf("February = %d\n", feb);
    printf("March    = %d\n", mars);
    printf("April    = %d\n", aprl);
    printf("May      = %d\n", may);
    printf("June     = %d\n", june);
    printf("July     = %d\n", july);
    printf("August   = %d\n", aut);
    printf("Septamber= %d\n", sep);
    printf("October  = %d\n", oct);
    printf("Novamber = %d\n", nov);
    printf("December = %d\n", dec);

    return 0;
}
