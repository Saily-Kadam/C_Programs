#include <stdio.h>
#include <string.h>

int areAnagrams(char s1[], char s2[]) {
    int count[256] = {0};

    // If lengths differ, not anagrams
    if (strlen(s1) != strlen(s2))
        return 0;

    // Count characters
    for (int i = 0; s1[i] != '\0'; i++) {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }

    // Check frequency
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("The strings are Anagrams.\n");
    else
        printf("The strings are NOT Anagrams.\n");

    return 0;
}