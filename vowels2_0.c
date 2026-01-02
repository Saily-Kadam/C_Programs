#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a string");
    scanf("%s",&ch);
    
    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'u':
        case 'o': // I and U are close
        case 'A':
        case 'E':
        case 'I':
        case 'U':
        case 'O':
        printf("Vowel", ch);
        break;
        default:
        printf("Consonent", ch);
        break;
    }
}