// Check if a number is a palindrome 
#include <stdio.h>

int main() {
    int number, original, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    // Check if original and reversed are the same
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}