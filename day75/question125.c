
/*q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.


Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("data.txt", "a");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "\n%s", str);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}