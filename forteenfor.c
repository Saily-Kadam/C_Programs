//Display all uppercase ASCII characters with their integer values
#include <stdio.h>

int main() {
    char ch;

    printf("Uppercase ASCII Characters and Their Integer Values:\n\n");

    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("Character: %c\tASCII Value: %d\n", ch, ch);
    }

    return 0;
}