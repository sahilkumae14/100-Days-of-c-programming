/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main()
{
    int seconds, hours, minutes, remaining_seconds;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    remaining_seconds = seconds % 3600;

    minutes = remaining_seconds / 60;
    remaining_seconds = remaining_seconds % 60;

    printf("%d:%d:%d", hours, minutes, remaining_seconds);

    return 0;
}