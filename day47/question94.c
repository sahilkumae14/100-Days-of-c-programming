/*Q94: Find the longest word in a sentence.


Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100] = "";
    char word[100];

    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (strlen(word) > strlen(longest)) {
                strcpy(longest, word);
            }

            j = 0;
        }

        i++;
    }

    // Check last word
    word[j] = '\0';

    if (strlen(word) > strlen(longest)) {
        strcpy(longest, word);
    }

    printf("%s", longest);

    return 0;
}