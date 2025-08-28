//Print the sum of all integers from 1 to n (user input) 
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum using a for loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the result
    printf("The sum of all integers from 1 to %d is: %d\n", n, sum);

    return 0;
}