/*Q96: Reverse each word in a sentence without changing the word order.


Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);

    int start = 0, i;

    for (i = 0; ; i++) {

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            // Reverse the current word
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }

            // Print space
            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;
    }

    return 0;
}