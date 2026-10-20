/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".


Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int i, count1[26] = {0}, count2[26] = {0};
    int flag = 1;

    printf("Enter first string: ");
    scanf("%99s", s);

    printf("Enter second string: ");
    scanf("%99s", t);

    if(strlen(s) != strlen(t))
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; s[i] != '\0'; i++)
    {
        count1[s[i] - 'a']++;
        count2[t[i] - 'a']++;
    }

    for(i = 0; i < 26; i++)
    {
        if(count1[i] != count2[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }

    return 0;
}