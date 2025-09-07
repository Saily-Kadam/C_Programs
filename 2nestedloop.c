//Find and display all prime numbers between 1 and 1000000 
#include <stdio.h>

int main() {
    int i, j, isPrime;

    // Iterate from 2 to 1000000
    for (i = 2; i <= 1000000; i++) {
        isPrime = 1; // Assume i is prime

        // Check for factors from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", i);
        }
    }

    return 0;
}