/*Q133: Create an enum for months and print how many days each month has.


Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

enum Months
{
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main()
{
    enum Months month;
    char input[10];

    scanf("%s", input);

    switch (input[0])
    {
        case 'J':
            if (input[1] == 'A')
                printf("31 days");
            else if (input[2] == 'N')
                printf("30 days");
            else
                printf("31 days");
            break;

        case 'F':
            printf("28 or 29 days");
            break;

        case 'M':
            if (input[2] == 'R')
                printf("31 days");
            else
                printf("31 days");
            break;

        case 'A':
            if (input[1] == 'P')
                printf("30 days");
            else
                printf("31 days");
            break;

        case 'S':
            printf("30 days");
            break;

        case 'O':
            printf("31 days");
            break;

        case 'N':
            printf("30 days");
            break;

        case 'D':
            printf("31 days");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}