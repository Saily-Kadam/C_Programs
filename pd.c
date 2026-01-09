#include <stdio.h>

int isPalindrome(int num);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("%d is a Palindrome Number.\n", num);
    else
        printf("%d is NOT a Palindrome Number.\n", num);

    return 0;
}

int isPalindrome(int num) {
    int original = num, reverse = 0;

    while(num != 0) {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }

    return (reverse == original);
}