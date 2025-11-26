/*
*       *       *       *
        *       *       *
                *       *
                        *
*/
#include <stdio.h>

int main(void) {
    int rows = 4;
    int gap = 7;
    int i, j, s;

    for (i = rows; i >= 1; --i) {
        for (s = 0; s < (rows - i) * (gap + 1); ++s)
            putchar(' ');

        for (j = 1; j <= i; ++j) {
            putchar('*');
            if (j < i) {
                for (s = 0; s < gap; ++s)
                    putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}