#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int morePseudoCode()
{
    int x;
    int y;
    int z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    int a = x * x;
    int b = y * y;
    int c = z * z;

    int result = a + b + c;

    printf("x:\ny:\nz:\n");
    printf("Computed: %d", result);

    return 0;
}

int enjoymentQuestion()
{
    // Array didn't work in the website for whatever reason.
    // Copy and paste the string values to their respective printf's (go by index)
    char answerList[3][100] = {
        "Great! Keep going this is only week 4!",
        "Oh no! Don't worry only eight short weeks to go!",
        "Your response makes no sense!"};

    printf("Are you enjoying the COMP500/ENSE501 labs (y/n)?");

    char userInput = getchar();

    if (userInput == 'y')
    {
        printf(answerList[0]);
    }
    else if (userInput == 'n')
    {
        printf(answerList[1]);
    }
    else
    {
        printf(answerList[2]);
    }

    return 0;
}

int biggestOfTwo()
{
    int first, second;

    printf("Please enter a number:\n");
    scanf("%d", &first);

    printf("Please enter another number:\n");
    scanf("%d", &second);

    // Check for the special condition if the values are equal
    if (first == second)
    {
        printf("The same number (%d) was entered twice.", first);

        return 0;
    }

    bool check = first > second;

    if (check)
    {
        printf("%d is bigger than %d.", first, second);
    }
    else
    {
        printf("%d is bigger than %d.", second, first);
    }

    return 0;
}

int leapYear()
{
    int year;

    printf("Year?\n");
    scanf("%i", &year);

    // printf("Year: %d\n", year);

    // printf("Number: %i\n", year);
    // printf("%d", year % 4);
    // printf("\n");

    // module operations
    bool module4 = (year % 4) == 0;
    bool module100 = (year % 100) == 0;
    bool module400 = (year % 400) == 0;

    // NEVER NOT INITILIASE VARIABLES AGAIN. IT WON'T BE CHANGED UPON FURTHER FUNCTION CALLS IT SEEM
    bool check = false;

    // printf("Check: %d\n", check);

    // long strip of checks, can probably cramp it all into a ternary.
    if (module4 && !module100)
    {
        check = true;
    }

    if (module4 && module100)
    {
        if (module400)
        {
            check = true;
        }
        else
        {
            check = false;
        }
    }

    char strFinal[40] = "";

    sprintf(strFinal, "%d", year);
    strcat(strFinal, check ? " is a leap year." : " is not a leap year.");

    printf("%s\n", strFinal);

    return 0;
}

int textInputBirthdaySeason()
{
    // List of months
    const char *months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const char **pointer = months;
    char *answer;

    // Catch input
    printf("What month were you born in?\n");
    scanf("%s", &answer);

    // printf("passed input");

    bool check = false;

    // while (*pointer != 0)
    // {
    //     printf("%s \n", *pointer);
    //     ++pointer;
    // }

    // printf("%s", &months[0]);

    for (size_t current = 0; sizeof months; current++)
    {
        printf("%s\n", months[current]);
        // printf("debug\n");
        // if (strncmp(months[current], answer))
        // {
        //     check = true;
        //     printf("check is true\n");
        //     break;
        // }
        // else
        // {
        //     printf("check is not true\n");
        // }
    }

    if (!check)
    {
        printf("%s is not a month!", &answer);
        return 0;
    }
    else
    {
        printf("%s is a month", &answer);
    }

    return 0;
}

int weekPaySpent()
{

    printf("Week of year?\n");

    int week = 0;
    scanf("%i", &week);

    printf("Pay week?\n");

    char pay;
    scanf(" %c", &pay);

    printf("Dollars spent?\n");

    float amount = 0;
    scanf("%f", &amount);

    printf("\nWeek: %i, Pay week: %c, Dollars spent: $%.2f", week, pay, amount);

    return 0;
}

int multiplicationTable()
{

    printf("Please enter a whole number:\n\n");

    int number = 0;
    scanf("%i", &number);

    for (int i = 1; i <= 12; i++)
    {
        printf("%i x %i = %i\n", i, number, (i * number));
    }

    return 0;
}