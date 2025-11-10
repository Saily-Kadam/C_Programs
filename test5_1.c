/*Write a c program that printd the following pattern using a while loop:
Accept n from the user. For example n = 5, the output should be:
1   2   3   4   5
    1   2   3   4
        1   2   3
            1   2
                1
*/
#include <stdio.h>

int main() {
    int n, i = 1;

    // Accept input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Outer loop for rows
    while (i <= n) {
        int space = 1;
        int j = 1;

        // Print leading spaces (each tab equivalent)
        while (space < i) {
            printf("\t");
            space++;
        }

        // Print numbers
        while (j <= n - i + 1) {
            printf("%d\t", j);
            j++;
        }

        // Move to next line
        printf("\n");
        i++;
    }

    return 0;
}