#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    if (isPalindrome(str))
        printf("'%s' is a Palindrome.\n", str);
    else
        printf("'%s' is NOT a Palindrome.\n", str);

    return 0;
}

int isPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}