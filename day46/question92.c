/*Q92: Find the first repeating lowercase alphabet in a string.


Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;

        if (count[str[i] - 'a'] == 2) {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}