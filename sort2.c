#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    printf("Character Frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0)
            printf("%c : %d\n", i, freq[i]);
    }

    return 0;
}