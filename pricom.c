//Accept a number from user and check if it is prime or composite
#include <stdio.h>

int main() {
    int n = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("Neither Prime nor Composite");
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
            count++;
        }
    }

    if (count > 2) {
        printf("Composite Number");
    } else {
        printf("Prime Number");
    }

    return 0;
}