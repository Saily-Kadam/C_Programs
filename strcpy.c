#include <stdio.h>

void stringCopy(char src[], char dest[]);

int main() {
    char src[100], dest[100];

    printf("Enter a string: ");
    gets(src);

    stringCopy(src, dest);

    printf("Copied string: %s\n", dest);

    return 0;
}

void stringCopy(char src[], char dest[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}