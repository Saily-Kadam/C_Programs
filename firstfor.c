//Print all numbers from 1 to n (user input) 
#include <stdio.h>

int main() {
    int n;

    // Ask the user to enter the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Print numbers from 1 to n using for loop
    printf("Numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}