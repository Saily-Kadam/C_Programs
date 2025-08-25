//Find the power (𝑥𝑦) without using pow()  
#include <stdio.h>

int main() {
    int x, y;
    long long result = 1;
    int exponent;

    // Input base and exponent
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    // Handle negative exponents
    exponent = y;
    if (exponent < 0) {
        exponent = -exponent;
    }

    // Calculate x^y using while loop
    int i = 0;
    while (i < exponent) {
        result *= x;
        i++;
    }

    // If exponent is negative, result should be 1/result
    if (y < 0) {
        // Convert to double for fractional result
        printf("%d raised to the power %d is: %.6f\n", x, y, 1.0 / result);
    } else {
        printf("%d raised to the power %d is: %lld\n", x, y, result);
    }

    return 0;
}
