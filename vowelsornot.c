//Check if a character is a vowel or consonant. 4
#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
