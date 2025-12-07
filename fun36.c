#include <stdio.h>
#include <ctype.h>

int countVowels(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Number of vowels = %d\n", countVowels(str));

    return 0;
}

int countVowels(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            count++;
    }
    return count;
}