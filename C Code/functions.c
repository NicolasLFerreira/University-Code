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

int squareCalculator()
{
    printf("What is the length of one length?\n\n");

    int sideLength = 0;
    scanf("%i", &sideLength);

    printf("The square's perimeter is: %i\n\n", sideLength * 4);
    printf("The square's area is: %i", sideLength * sideLength);

    return 0;
}

int ellipse()
{
    const float pi = 3.14159265359f;

    float area = 0.0f;
    float axisA = 0.0f;
    float axisB = 0.0f;

    printf("What is the ellipse's area?\n");
    scanf("%f", &area);
    printf("What is the length of one of the ellipse's axes?\n");
    scanf("%f", &axisA);

    axisB = area / (axisA * pi);

    printf("The ellipse's other axis is: %.2f", axisB);

    return 0;
}

int wholeCharReal()
{
    int wholeNumber = 0;
    char ASCII = 0;
    double realNumber = 0;

    printf("Whole number?\n");
    scanf("%i", &wholeNumber);
    printf("ASCII character?\n");
    scanf(" %c", &ASCII);
    printf("Real number?\n");
    scanf("%lf", &realNumber);

    printf("\nThe user's input was:\n\n");

    printf("Whole number is:     %i\n", wholeNumber);
    printf("ASCII character is:  %c\n", ASCII);
    printf("Real number is:      %lf\n", realNumber);

    return 0;
}

int threeTupleMaths()
{
    int first[3] = {0, 0, 0};
    int second[3] = {0, 0, 0};
    int solutions[3] = {0, 0, 0};

    // Handles first array
    printf("First Array Setup...\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("  Please enter the %i%s value:\n", i + 1, (i == 0 ? "st" : (i == 1 ? "nd" : "rd")));
        scanf("%i", &first[i]);
    }

    printf("\nFirst array is: { %i, %i, %i }\n\n", first[0], first[1], first[2]);

    // Handles second array
    printf("Second Array Setup...\n");
    for (int i = 0; i < 3; i++)
    {
        printf("  Please enter the %i%s value:\n", i + 1, (i == 0 ? "st" : (i == 1 ? "nd" : "rd")));
        scanf("%i", &second[i]);
    }

    printf("\nSecond array is: { %i, %i, %i }\n\n", second[0], second[1], second[2]);

    printf("  C..a..l..c..u..l..a..t..i..n..g..\n");

    // Addition
    for (int i = 0; i < 3; i++)
    {
        solutions[i] = first[i] + second[i];
    }
    printf("\nAdding corresponding elements: { %i, %i, %i }\n", solutions[0], solutions[1], solutions[2]);

    // Subtraction
    for (int i = 0; i < 3; i++)
    {
        solutions[i] = first[i] - second[i];
    }
    printf("\nSubtracting corresponding elements: { %i, %i, %i }\n", solutions[0], solutions[1], solutions[2]);

    // Multiplication
    for (int i = 0; i < 3; i++)
    {
        solutions[i] = first[i] * second[i];
    }
    printf("\nMultiplying corresponding elements: { %i, %i, %i }\n\n", solutions[0], solutions[1], solutions[2]);

    return 0;
}

int digitCounter()
{
    int input = 0;

    printf("Input a number:\n");
    scanf("%i", &input);

    printf("%i is %i digit(s).\n", input, (int)floor(log10((double)input)) + 1);

    return 0;
}

int lowerToUpper()
{
    printf("Type in a lowercase five letter word:\n");
    char input[5] = "";
    scanf("%s", input);

    printf("\nOriginal: %s\n", input);

    for (int i = 0; i < 5; i++)
    {
        input[i] -= 32;
    }

    printf("\nCopy: %s", input);

    return 0;
}

int floatToASCII()
{
    float input;
    char string[9] = "";

    printf("Enter a real number:\n");
    scanf("%f", &input);
    printf("Converting float input into ASCII C-String array...\n\n");

    sprintf(string, "%f", input);

    for (int i = 0; i < 8; i++)
    {
        printf("Element %i is: '%c' which is ASCII %i\n", i, string[i], (int)string[i]);
    }
    return 0;
}

int inputComputation()
{
    float x, y, a, b, result;

    printf("Enter the x value:\n");
    scanf("%f", &x);

    printf("Enter the y value:\n");
    scanf("%f", &y);

    a = x * y;
    b = x + y;

    result = b * b + a * (b - x) * (a + y);

    printf("Computed: %f", result);

    return 0;
}

int supermanOrBatman()
{
    char input;

    printf("Which hero is your favourite, Superman (S) or Batman (B)?\n");
    scanf(" %c", &input);

    if (input == 'S' || input == 's')
        printf("The user's favourite super hero is Superman");
    else if (input == 'B' || input == 'b')
        printf("The user's favourite super hero is Batman");
    else
        printf("Invalid response!");

    return 0;
}

int gradePercentToLetter()
{
    float percent;
    char *grade;

    printf("Please enter your Practical Test 1 percentage:\n");
    scanf("%f", &percent);

    if (percent >= 90)
        grade = "A+";
    else if (percent >= 85)
        grade = "A";
    else if (percent >= 80)
        grade = "A-";
    else if (percent >= 75)
        grade = "B+";
    else if (percent >= 70)
        grade = "B";
    else if (percent >= 65)
        grade = "B-";
    else if (percent >= 60)
        grade = "C+";
    else if (percent >= 55)
        grade = "C";
    else if (percent >= 50)
        grade = "C-";
    else
        grade = "D";

    printf("%f%% is a '%s'", percent, grade);

    return 0;
}

int gameAIResponse()
{
    char health = ' ';
    char distance = ' ';

    printf("Is the player's health low or high (l/h)?\n");
    scanf(" %c", &health);

    printf("Where is the player, close or far (c/f)?\n");
    scanf(" %c", &distance);

    printf("\n");

    if (health == 'l' && distance == 'c')
    {
        printf("The AI should attack.");
    }
    else if (health == 'h' && distance == 'f')
    {
        printf("The AI should go to sleep.");
    }
    else if (health == 'l' && distance == 'f')
    {
        printf("The AI should start searching.");
    }
    else
    {
        printf("The AI should call for reinforcements.");
    }

    return 0;
}

int triangleTypeIdentifier()
{
    int length1, length2, length3;
    int same = 0;

    printf("Enter the first side length:\n");
    scanf("%i", &length1);
    printf("Enter the second side length:\n");
    scanf("%i", &length2);
    printf("Enter the third side length:\n");
    scanf("%i", &length3);

    if (length1 == length2)
        same++;
    if (length1 == length3)
        same++;
    if (length2 == length3)
        same++;

    printf("\nThis is a%s triangle.", (same == 0 ? " scalene" : (same == 1 ? "n isosceles" : "n equilateral")));

    return 0;
}

int monthToNumberDays()
{
    int month = 0;
    char *days = "";

    printf("Enter a month (Jan is 1, Dec is 12):\n");
    scanf("%i", &month);

    if (month >= 1 && month <= 12)
    {
        if (month == 2)
            days = "28 or 29";
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            days = "31";
        else
            days = "30";
        printf("That month has %s days in it.\n", days);
        return 0;
    }
    printf("Invalid month!");
    return 0;
}

int countDownFrom70()
{
    for (int i = 70; i >= 0; i -= 2)
    {
        printf("%i\n", i);
    }
    return 0;
}

int steppingWithAForLoop()
{
    int start = 0;
    int stop = 0;
    int step = 0;

    printf("Starting number:\n");
    scanf("%i", &start);

    printf("Stopping number:\n");
    scanf("%i", &stop);

    printf("Step size:\n");
    scanf("%i", &step);

    printf("\nStarting at %i\n", start);

    for (int i = start; i < stop; i += step)
    {
        printf("In loop: %i\n", i);
    }

    printf("Stopping at %i\n", stop);

    printf("%i", (int)(((start - stop) + 2) / step));

    return 0;
}

int basicCalculator()
{
    char oper = 0;
    int left = 0;
    int right = 0;

    printf("Operator? Left Operand? Right Operand?\n");
    scanf(" %c", &oper);
    scanf("%i", &left);
    scanf("%i", &right);

    if (right == 0 && oper == '/')
    {
        printf("Unable to compute divide by zero!");
        return 0;
    }

    printf("Computing: %i %c %i\n", left, oper, right);

    switch (oper)
    {
    case ('+'):
        left += right;
        break;
    case ('*'):
        left *= right;
        break;
    case ('-'):
        left -= right;
        break;
    case ('/'):
        left /= right;
        break;
    default:
        left = 0;
        break;
    }

    printf("Result: %i", left);

    return 0;
}

int simpleRepeater()
{
    char symbol = 0;
    int repeat = 0;

    printf("ASCII Symbol?\n");
    scanf(" %c", &symbol);

    printf("Repeat Count?\n");
    scanf("%i", &repeat);

    for (int i = 0; i < repeat; i++)
    {
        printf("%c ", symbol);
    }

    return 0;
}

int factorialLoop()
{
    int number = 0;
    int result = 1;

    printf("Enter a non-negative whole number:\n");
    scanf("%i", &number);

    if (number < 0)
    {
        printf("Bad Input! %i is negative...", number);
        return 0;
    }

    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }

    printf("%i! is %i", number, result);

    return 0;
}

int insertValue()
{
    int array[100];
    int size = 0;
    int value = 0;
    int old = 0;
    int index = 0;

    printf("Input total number of elements required:\n");
    scanf("%i", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Input element [%i]:\n", i);
        scanf("%i", &array[i]);
    }

    printf("\nBefore insertion:\n");

    for (int i = 0; i < size; i++)
    {
        printf("Element [%i] is %i\n", i, array[i]);
    }

    printf("\nInput a new value to insert:\n");
    scanf("%i", &value);

    printf("Input where to insert the value %i:\n", value);
    scanf("%i", &index);

    old = array[index];
    array[index] = value;
    value = old;
    for (int i = index + 1; i < size + 1; i++)
    {
        old = array[i];
        array[i] = value;
        value = old;
    }

    printf("After insertion:\n");
    for (int i = 0; i < size + 1; i++)
    {
        printf("Element [%i] is %i\n", i, array[i]);
    }

    return 0;
}

int simpleDecryption()
{
    char secretWord[128];

    printf("Enter a secret word:\n");
    scanf("%s", secretWord);

    for (int i = 0; secretWord[i] != '\0'; i++)
    {
        if (secretWord[i] == 'a' || secretWord[i] == 'A')
            secretWord[i] += 25;
        else
            secretWord[i]--;
    }

    printf("Decrypted: %s", secretWord);

    return 0;
}

int firstNameValidator()
{
    char name[100];
    int valid = 0;

    while (!valid)
    {
        printf("What is your first name?\n\n");
        scanf("%s", name);

        if (name[0] < 65 || name[0] > 90)
        {
            printf("Invalid input!\n");
        }
        else
        {
            for (int i = 1; name[i] != '\0'; i++)
            {
                if (name[i] >= 97 && name[i] <= 123)
                    valid = 1;
                else
                {
                    valid = 0;
                    printf("Invalid input!\n");
                    break;
                }
            }
        }
    }

    printf("%s is a valid first name.", name);

    return 0;
}

int loopWithPseudoCode()
{
    int X;

    printf("Enter a number X:\n");
    scanf("%i", &X);

    for (int n = 0; n < X; n++)
    {
        if (n > 4)
        {
            printf("%i\n", n);
        }
        else
        {
            printf("%i\n", 9 - n);
        }
    }

    return 0;
}

int divisibleBySeven()
{
    int input, changed, count = 0;

    printf("Enter a whole number:\n");
    scanf("%i", &input);
    changed = input;

    if (input <= 0)
        changed = (~input) + ++count;

    for (int i = 1; i <= changed; i++)
    {
        if (i % 7 == 0)
            count++;
    }

    printf("%i numbers between 1 and %i are \ndivisible by seven with no remainder.", count, input);

    return 0;
}

int stringToUpper()
{
    char input[100];

    printf("Please enter your name:\n");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; i <= 20; i++)
    {
        if (input[i] >= 97 && input[i] <= 123)
            input[i] -= 32;
    }
    input[20] = '\0';

    printf("%s\n", input);

    return 0;
}

int diamondPatternDebugging()
{
    int rows, columns;
    int insertion, fakeColumn, fakeRow;
    int formula;

    printf(">\n");
    scanf("%i", &rows);

    if (rows % 2 == 0)
        columns = rows - 1;
    else
        columns = rows;

    // DEBUG
    printf("Rows: %i | Columns: %i\n\n", rows, columns);

    printf("%i, %i\n\n", columns, columns / 2);

    printf("    ");

    for (int i = 0; i < columns; i++)
    {
        printf("%i", i);
    }
    printf("\n");

    for (int row = 0; row < rows; row++)
    {
        printf("%i ->", row); // DEBUG
        for (int column = 0; column < columns; column++)
        {
            if (row < (rows / 2))
            {
                formula = (columns - (row * 2 + 1)) / 2;
                if (column >= formula && column < columns - formula)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                fakeColumn = columns - column - 1;
                fakeRow = rows - row - 1;

                formula = (columns - (fakeRow * 2 + 1)) / 2;
                if (fakeColumn >= formula && fakeColumn < columns - formula)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}

int diamondPattern()
{
    int rows, columns, columnUsing, rowUsing, formula;

    printf(">\n");
    scanf("%i", &rows);

    if (rows == 0)
    {
        printf("Too small!");
        return 0;
    }

    if (rows % 2 == 0)
        columns = rows - 1;
    else
        columns = rows;

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            // Ternary operation alternative:
            // columnUsing = row < (rows / 2) ? column : columns - column - 1;
            // rowUsing = row < (rows / 2) ? row : rows - row - 1;

            if (row < (rows / 2))
            {
                columnUsing = column;
                rowUsing = row;
            }
            else
            {
                columnUsing = columns - column - 1;
                rowUsing = rows - row - 1;
            }

            formula = (columns - (rowUsing * 2 + 1)) / 2;

            if (columnUsing >= formula && columnUsing < columns - formula)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

int fruitAndVegetableIdentifier()
{
    const char *fruits[] = {"apple", "banana", "orange", "melon", "tomato"};
    const char *vegetables[] = {"broccoli", "carrot", "onion", "potato", "spinach"};

    char input[50];

    printf("Please input the item to identify:\n");

    while (1)
    {
        scanf("%s", input);

        for (int i = 0; i < 5; i++)
        {
            if (strcmp(input, fruits[i]) == 0)
            {
                printf("%s is fruit.\n", input);
                return 0;
            }
            if (strcmp(input, vegetables[i]) == 0)
            {
                printf("%s is vegetable.\n", input);
                return 0;
            }
        }

        printf("%s is not a fruit or vegetable, try again:\n", input);
    }

    return 0;
}

// Highest of three program

int find_maximum(float number1, float number2, float number3)
{
    float greater = number1 > number2 ? number1 : number2;
    return greater > number3 ? greater : number3;
}

int highestOfThreeProgram()
{
    float number1, number2, number3;

    printf("Please enter the first number:\n");
    scanf("%f", &number1);

    printf("Please enter the second number:\n");
    scanf("%f", &number2);

    printf("Please enter the third number:\n");
    scanf("%f", &number3);

    printf("The maximum number is %f\n", find_maximum(number1, number2, number3));

    return 0;
}

// Dinner bill calculator program

int compute_bill(float starterPrice, float mainPrice, float dessertPrice)
{
    return starterPrice + mainPrice + dessertPrice;
}

void print_bill(float starterPrice, float mainPrice, float dessertPrice)
{
    printf("Starter: $%.2f\n", starterPrice);
    printf("Main:    $%.2f\n", mainPrice);
    printf("Dessert: $%.2f\n", dessertPrice);
    printf("---------------\n");
    printf("Total:   $%.2f\n", compute_bill(starterPrice, mainPrice, dessertPrice));
}

int dinnerBillCalculator()
{
    float starterPrice = 0.0f;
    float mainPrice = 0.0f;
    float dessertPrice = 0.0f;

    printf("Starter price? ");
    scanf("%f", &starterPrice);

    printf("Main price? ");
    scanf("%f", &mainPrice);

    printf("Dessert price? ");
    scanf("%f", &dessertPrice);

    printf("\n");

    // TODO: Call printBill
    print_bill(starterPrice, mainPrice, dessertPrice);

    return 0;
}

// Hex digit identifier program

int is_digit(char input)
{
    return (input >= 'a' && input <= 'f') ||
                   (input >= 'A' && input <= 'F') ||
                   (input >= '0' && input <= '9')
               ? 1
               : 0;
}

int hexDigitIdentifier()
{
    char input = 0;
    scanf(" %c", &input);

    printf("> %i\n", is_digit(input));

    return 0;
}

// Inverted triangle printer program

void draw_inverted_triangle(int height)
{
    for (int col = 0; col < height * 2; col++)
    {
        printf("_");
    }

    printf("\n");

    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < row; col++)
        {
            printf(" ");
        }

        printf("\\");

        for (int col = 0; col < (height * 2) - 2 * (row + 1); col++)
        {
            printf(" ");
        }

        printf("/\n");
    }
}

int invertedTrianglePrinter()
{
    int height;

    printf("enter height:\n\n");
    scanf("%i", &height);

    draw_inverted_triangle(height);

    return 0;
}

// Learning outcomes assessment cover program

void print_assessments(int learning_outcome)
{
    if (learning_outcome < 1 || learning_outcome > 10)
    {
        printf("Invalid Learning Outcome.");
        return;
    }

    printf("\nReporting Journal\n");
    if (learning_outcome <= 6)
        printf("Practical Test 1\n");
    if (learning_outcome <= 8)
        printf("Practical Test 2\n");
    if (learning_outcome <= 9)
        printf("Practical Test 3\n");
    printf("Final Practical Exam");
}

int learningOutcomeAssessmentCover()
{
    int outcome;

    printf("Learning Outcome?\n");
    scanf("%i", &outcome);

    print_assessments(outcome);

    return 0;
}

// Point distance calculator program

struct Point3D
{
    float x;
    float y;
    float z;
};

float compute_distance3d(struct Point3D p1, struct Point3D p2);

int PointDistanceCalculator(void)
{
    struct Point3D p1;
    struct Point3D p2;

    scanf("%f", &p1.x);
    scanf("%f", &p1.y);
    scanf("%f", &p1.z);
    scanf("%f", &p2.x);
    scanf("%f", &p2.y);
    scanf("%f", &p2.z);

    float distance = compute_distance3d(p1, p2);
    printf("distance between two points is %f.", distance);

    return 0;
}

float compute_distance3d(struct Point3D p1, struct Point3D p2)
{
    return sqrt(pow(2, p2.x - p1.x) + pow(2, p2.y - p1.y) + pow(2, p2.z - p1.z));
}

// Rocket drawing program

void print_nozzle(int height)
{
    for (int row = 0; row < height / 2; row++)
    {
        for (int col = 0; col < height / 2 - row; col++)
        {
            printf(" ");
        }

        printf("/");

        for (int col = 0; col < row * 2; col++)
        {
            printf(" ");
        }

        printf("\\\n");
    }
}

void print_lids(int width)
{
    printf("+");
    for (int col = 0; col < width; col++)
    {
        printf("-");
    }
    printf("+\n");
}

void print_body(int height, int width)
{
    print_lids(width);

    for (int row = 0; row < height; row++)
    {
        printf("|");
        for (int col = 0; col < width; col++)
        {
            printf(" ");
        }
        printf("|\n");
    }

    print_lids(width);
}

void print_logo(int width)
{
    for (int row = 0; row < 3; row++)
    {
        printf("|");

        for (int col = 0; col < (width - 6) / 2; col++)
        {
            printf(" ");
        }

        if (row == 0)
        {
            printf(" N    ");
        }
        else if (row == 1)
        {
            printf("    Z ");
        }
        else if (row == 2)
        {
            printf("Rocket");
        }

        for (int col = 0; col < (width - 6) / 2; col++)
        {
            printf(" ");
        }

        printf("|\n");
    }
}

int rocketDrawing()
{
    int width, height;

    printf("Rocket body width (minimum 6)?\n");
    scanf("%i", &width);

    printf("Rocket body height?\n");
    scanf("%i", &height);

    print_nozzle(width);
    print_body(height, width);
    print_logo(width);
    print_body(height, width);
    print_nozzle(width);

    return 0;
}

// Upper to lower program

char to_lower(char input)
{
    if (input < 65 || input > 90)
        return 0;
    return input + 32;
}

int upperToLower()
{
    char input;

    printf("Please input a letter:\n");
    scanf("%c", &input);

    printf("%c's lowercase is %c", input, to_lower(input));

    return 0;
}

// logic gates program

void nand_gate(int a, int b)
{
    printf("%i", !(a && b));
}

void nor_gate(int a, int b)
{
    printf("%i", !(a || b));
}

void xor_gate(int a, int b)
{
    printf("%i", (a && !b) || (!a && b));
}

void xnor_gate(int a, int b)
{
    printf("%i", !((a && !b) || (!a && b)));
}

int logicGates()
{
    int a = 0, b = 1;

    printf("a b           a NAND b    a NOR b    a XOR b    a XNOR b\n");

    for (int row = 0; row < 4; row++)
    {
        if (row > 1)
            a = 1;
        b = !b;

        printf("%i %i", a, b);
        printf("           ");
        nand_gate(a, b);
        printf("           ");
        nor_gate(a, b);
        printf("          ");
        xor_gate(a, b);
        printf("          ");
        xnor_gate(a, b);
        printf("\n");
    }

    return 0;
}

// Vowel checker program

int is_vowel(char input)
{
    char vowels[] = "aeiouAEIOU";

    for (int i = 0; i < 10; i++)
    {
        if (input == vowels[i])
            return 1;
    }

    return 0;
}

int vowelChecker()
{
    char input;

    scanf("%c", &input);

    printf("> %i", is_vowel(input));

    return 0;
}

// Number comparator program

void print_equal(int a, int b)
{
    if (a != b)
        printf("Not ");
    printf("Equal [%i vs %i]\n", a, b);
}

void print_largest(int a, int b)
{
    int largest = a > b ? a : b;

    printf("%i is largest [%i vs %i]\n", largest, a, b);
}

void print_smallest(int a, int b)
{
    int smallest = a < b ? a : b;

    printf("%i is smallest [%i vs %i]", smallest, a, b);
}

int numberComparator(){
    int a, b;

    printf("Please enter the first number:\n");
    scanf("%i", &a);

    printf("Please enter the second number:\n");
    scanf("%i", &b);

    print_equal(a, b);
    print_largest(a , b);
    print_smallest(a, b);

    return 0;
}



