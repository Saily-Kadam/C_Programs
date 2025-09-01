// Print the first n terms of the Fibonacci series
#include <stdio.h>

int main() {
    int n;
    int first = 0, second = 1, next;

    // Input from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Error check
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series (%d terms):\n", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}