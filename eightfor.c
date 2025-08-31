//Reverse a number entered by the user 
#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // For loop to reverse the number
    for (; num != 0; num /= 10) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}