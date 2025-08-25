// Display all uppercase ASCII characters with their integer values c program
#include <stdio.h>

int main() {
    char ch = 'A';  

    printf("Uppercase ASCII characters and their integer values:\n");

    while (ch <= 'Z') {  
        printf("Character: %c  ASCII Value: %d\n", ch, ch);
        ch++;
    }

    return 0;
}
