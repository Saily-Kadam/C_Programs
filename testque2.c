/*Write a C program that prints the following pattern using a while loop:
Accept n from the user. For example n = 5, the output should be:

1
1 2
1 2 3 
1 2 3 4 
1 2 3 4 5*/
#include <stdio.h>

int main() {
    int n, i = 1;

    // Accept input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Outer loop for each line
    while (i <= n) {
        int j = 1;

        // Inner loop to print numbers from 1 to i
        while (j <= i) {
            printf("%d ", j);
            j++;
        }

        printf("\n");  // Move to next line
        i++;
    }

    return 0;
}