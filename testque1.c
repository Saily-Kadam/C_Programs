/*Write a C program that takes a negative integer n as input.
Using a while loop, iterate from 1 down to n (inclusive). For each number, display an output based on the following rules:
• If the number is divisible by both 3 and 5, print: "Epic Combo!"
• If the number is divisible by both 2 and 3, print: "FizzTwos!"
• If the number is divisible by 5 "Buzz Deep!"
• If the number is divisible by 3 only, print: “Fizz”
• If the number is divisible by neither 2, 3, nor 5, print: "Chill"
Example: Input: -7
Output:
-1: Chill
-2:Chill
-3:Fizz
-4:Chill
-5:Buzz Deep!
-6:FizzTwos!
-7: Chill;*/
#include <stdio.h>

int main() {
    int n;

    // Take a negative integer input
    printf("Enter a negative integer: ");
    scanf("%d", &n);

    // Validate input
    if (n >= 0) {
        printf("Please enter a negative integer.\n");
        return 1;
    }

    int i = 1;
    while (i >= n) {
        printf("%d: ", i);

        if (i % 3 == 0 && i % 5 == 0) {
            printf("Epic Combo!\n");
        } 
        else if (i % 2 == 0 && i % 3 == 0) {
            printf("FizzTwos!\n");
        } 
        else if (i % 5 == 0) {
            printf("Buzz Deep!\n");
        } 
        else if (i % 3 == 0) {
            printf("Fizz\n");
        } 
        else {
            printf("Chill\n");
        }
        i--;
    }

    return 0;
}