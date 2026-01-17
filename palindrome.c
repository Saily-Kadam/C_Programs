#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int rev = 0;

    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    return original == rev;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}