#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

typedef struct Animal
{
    int age;
    int size;
    int alive;
};

void main()
{
    struct Animal animal = {12, 20, 14};
    struct Animal *pA;

    

    while (true)
    {
        pointerFlexibilityTest();
    }
}

void TwoSComplement()
{
    int a = -10;
    int b = ~(a - 1);
    printf("%i", b);
}

void pointerFlexibilityTest()
{
    int a[1] = {1};

    a[0] = 3;
    a[5] = 25;

    printf("%i\n", a[5]);

    int *ptr = &a[5];

    printf("%i\n", ptr);

    *ptr = 30;

    printf("%i\n", *ptr);

    return;
}

void pointerTesting()
{
    int x = 5;
    int *px = &x;

    printf("px: %i\n", px);
    printf("x: %i\n\n", x);

    int y = (int)px;
    int *py = (int *)y;

    printf("py stored address: %i\n", py);
    printf("py value: %i", *py);

    return;
}