/*Q97: Print the initials of a name.


Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char name[100];

    fgets(name, sizeof(name), stdin);

    // Print first character
    printf("%c.", name[0]);

    // Print character after every space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != '\n') {
            printf("%c.", name[i]);
        }
    }

    return 0;
}