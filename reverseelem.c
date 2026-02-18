#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    while (num != 0) {
        remainder = num % 10;          // Extract last digit
        reversed = reversed * 10 + remainder;  
        num = num / 10;                // Remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    if (original == reversed)
        printf("It is a Palindrome number.\n");
    else
        printf("It is NOT a Palindrome number.\n");

    return 0;
}