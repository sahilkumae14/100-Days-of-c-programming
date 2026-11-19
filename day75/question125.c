
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
    FILE *ptr;
    char sahil[50];
    ptr = fopen("sahil.text","w");
    if(ptr== NULL)
    {
    printf("file con not br open");
    return 1;
    }
    printf("enter youe text");
    fgets(sahil, 50 ,stdin);
    fprintf(ptr , "\n%s" , sahil);
    fclose;
    printf("sahil.text flie updated sussefully with write mode");
    return 0;





    return 0;
}