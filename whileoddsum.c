//Print the sum of all odd numbers from 1 to n (user input)
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
