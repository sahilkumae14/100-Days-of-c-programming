/*Q67: Insert an element in an array at a given position.


Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, i, pos, element;
    int arr[100];

    // Array size
    scanf("%d", &n);

    // Array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Position and element
    scanf("%d %d", &pos, &element);

    // Elements ko right shift karo
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Element insert karo
    arr[pos] = element;

    // Updated array print karo
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}