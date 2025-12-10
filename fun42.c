#include <stdio.h>
#include <string.h>

void reverseString(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

void reverseString(char str[]) {
    int i = 0, j = strlen(str) - 1;
    char temp;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}