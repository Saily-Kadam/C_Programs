// Check if a number is a palindrome 
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;  // Store original number

    // Reverse the number using a for loop
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    // Check if original and reversed numbers are the same
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}