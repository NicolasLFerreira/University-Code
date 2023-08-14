#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void main()
{
    while (true)
    {
        monthToNumberDays();
    }
}

void test(){
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