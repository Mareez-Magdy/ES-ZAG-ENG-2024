#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p ,*q,*r ;

    int x = 1;
    int y = 2;
    int z = 3;
    p = &x;
    q = &y;
    r = &z;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("p: %p\n", (void *)p);
    printf("q: %p\n", (void *)q);
    printf("r: %p\n", (void *)r);
    printf("*p: %d\n", *p);
    printf("*q: %d\n", *q);
    printf("*r: %d\n", *r);

    printf("Swapping pointers\n");

    int t = r;
    r = p;
    p = q;
    q = t;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);
    printf("p: %p\n", (void *)p);
    printf("q: %p\n", (void *)q);
    printf("r: %p\n", (void *)r);
    printf("*p: %d\n", *p);
    printf("*q: %d\n", *q);
    printf("*r: %d\n", *r);

    return 0;
}
