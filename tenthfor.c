//Calculate the factorial of a number 
#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Error check
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Factorial calculation using for loop
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}