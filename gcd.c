// Find the GCD (HCF) and LCM of two numbers
#include <stdio.h>

int main() {
    int num1, num2, a, b, gcd, lcm;

    // Input two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    // Find GCD using Euclidean algorithm with while loop
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (num1 * num2) / gcd;

    printf("GCD (HCF) of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}