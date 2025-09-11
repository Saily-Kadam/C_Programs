// Program to keep summing until the user enters a negative number, then break the loop and print the sum
#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    while (1) {
        printf("Enter a number (negative to quit): ");
        scanf("%d", &number);

        if (number < 0) {
            break;
        }

        sum += number;
    }

    printf("Total sum: %d\n", sum);

    return 0;
}