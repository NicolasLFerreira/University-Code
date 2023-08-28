#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void main()
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
    while (true)
    {
        monthToNumberDays();
    }
}

void pointerTesting()
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