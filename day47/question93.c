/*Q93: Check if two strings are anagrams of each other.


Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0};
    int count2[26] = {0};
    int i, anagram = 1;

    scanf("%s", str1);
    scanf("%s", str2);

    // Count characters of first string
    for (i = 0; str1[i] != '\0'; i++) {
        count1[str1[i] - 'a']++;
    }

    // Count characters of second string
    for (i = 0; str2[i] != '\0'; i++) {
        count2[str2[i] - 'a']++;
    }

    // Compare character counts
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}


