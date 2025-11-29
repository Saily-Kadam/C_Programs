/*                      *
                *       *
        *       *       *
*       *       *       *   */
#include <stdio.h>

void printSpaces(int n) {
    for (int i = 0; i < n; i++)
        putchar(' ');
}

void printPattern(int rows) {
    int gap = 7;   // spaces between stars

    for (int i = 1; i <= rows; i++) {

        // Leading spaces
        printSpaces((rows - i) * (gap + 1));

        // Stars + gap
        for (int j = 1; j <= i; j++) {
            putchar('*');
            if (j < i) printSpaces(gap);
        }

        putchar('\n');
    }
}

int main() {
    printPattern(4);
    return 0;
}