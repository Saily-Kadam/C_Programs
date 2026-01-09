#include <stdio.h>

int countWords(char str[]);

int main() {
    char str[200];

    printf("Enter a sentence: ");
    gets(str);

    printf("Number of words = %d\n", countWords(str));

    return 0;
}

int countWords(char str[]) {
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if((i == 0 && str[i] != ' ') || 
           (str[i] != ' ' && str[i - 1] == ' '))
            count++;
    }
    return count;
}