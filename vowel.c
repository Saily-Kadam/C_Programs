#include <stdio.h>
#include <ctype.h>

int isVowel(char ch);

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(isVowel(ch))
        printf("%c is a Vowel.\n", ch);
    else
        printf("%c is a Consonant.\n", ch);

    return 0;
}

int isVowel(char ch) {
    ch = tolower(ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1;
    else
        return 0;
}