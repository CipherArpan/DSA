#include <stdio.h>

int main()
{
    int a = 10;

    int *p = &a;
    int **pp = &p;

    printf("Value of a: %d\n", a);
    printf("Address of a (&a): %p\n", (void *)&a);
    printf("Value in p (address of a): %p\n", (void *)p);
    printf("Value via *p: %d\n", *p);
    printf("Value via **pp: %d\n", **pp);

    *p = 25;

    printf("After *p = 25, value of a: %d\n", a);

    **pp = 50;

    printf("After **pp = 50, value of a: %d\n", a);

    return 0;
}