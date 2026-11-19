/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.


Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status status;
    char input[20];

    scanf("%s", input);

    if (input[0] == 'S')
    {
        status = SUCCESS;
        printf("Operation successful");
    }
    else if (input[0] == 'F')
    {
        status = FAILURE;
        printf("Operation failed");
    }
    else if (input[0] == 'T')
    {
        status = TIMEOUT;
        printf("Operation timed out");
    }
    else
    {
        printf("Invalid status");
    }

    return 0;
}