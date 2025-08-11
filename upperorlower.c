//Check if a character is uppercase or lowercase. 
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (isupper(ch)) {
        printf("The character is uppercase.\n");
    } else if (islower(ch)) {
        printf("The character is lowercase.\n");
    } else {
        printf("The character is not a letter.\n");
    }

    return 0;
}
