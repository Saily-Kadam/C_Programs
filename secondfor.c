//Print all even numbers between 1 and n (user input) 
#include <stdio.h>

int main() {
    int n;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print all even numbers between 1 and n
    printf("Even numbers between 1 and %d are:\n", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}