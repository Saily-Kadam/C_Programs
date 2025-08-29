//Calculate and print the sum of the series 1 + 1/2 + 1/3 + ... + 1/n 
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Ask user to enter a value for n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    // Print the result
    printf("Sum of the series 1 + 1/2 + 1/3 + ... + 1/%d = %.6lf\n", n, sum);

    return 0;
}