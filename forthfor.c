//Print the sum of all odd numbers from 1 to n (user input) 
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user to enter a value for n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Print the result
    printf("Sum of all odd numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}