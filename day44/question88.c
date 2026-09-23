/*Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main(){
    char a[50];
    printf("Enter a string: ");
    fgets(a,50,stdin);
    for(int i = 0; a[i]!='\0' && a[i]!='\n'; i++){
        if(a[i] == ' '){
            a[i] = '-';
        }
    }
    printf("%s",a);
    return 0;
}
