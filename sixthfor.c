//Sum of squares of first n numbers 
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum of squares using for loop
    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    // Output the result
    printf("Sum of squares of first %d natural numbers = %d\n", n, sum);

    return 0;
}