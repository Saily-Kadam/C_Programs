//given n and m, find the first number greater than n that is divisible by m using one loop. 
#include <stdio.h>

int main() {
    int n, m;

    // Accept input from the user
    printf("Enter values for n and m: ");
    scanf("%d %d", &n, &m);

    // Loop to find the first number greater than n that is divisible by m
    int i = n + 1; // Start from the number just greater than n
    while (1) {
        if (i % m == 0) {
            printf("First number greater than %d that is divisible by %d is: %d\n", n, m, i);
            break;
        }
        i++;
    }

    return 0;
}