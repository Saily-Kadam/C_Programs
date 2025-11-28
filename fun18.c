/*Alphabet Triangle:
A 
A B
A B C
A B C D

Reverse Alphabet Triangle:
A B C D
A B C
A B
A*/
#include <stdio.h>

void alphabetTriangle(int n);
void alphabetTriangleReverse(int n);

int main() {
    int n = 4;

    printf("Alphabet Triangle:\n");
    alphabetTriangle(n);

    printf("\nReverse Alphabet Triangle:\n");
    alphabetTriangleReverse(n);

    return 0;
}

void alphabetTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}

void alphabetTriangleReverse(int n) {
    for (int i = n; i >= 1; i--) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}