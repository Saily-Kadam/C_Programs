//factorial
#include <stdio.h>

// Function declaration
long factorial(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %ld\n", num, factorial(num));

    return 0;
}

// Recursive function
long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}