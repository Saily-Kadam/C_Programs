/*
                            *
                        *   *
                    *   *   *
                *   *   *   *
*/
#include <stdio.h>

int main() {
    int rows = 4;
    int space, i, j;

    for (i = 1; i <= rows; i++) {

        // Print leading spaces
        for (space = 1; space <= (rows - i) * 8; space++) {
            printf(" ");
        }

        // Print stars with wide spacing
        for (j = 1; j <= i; j++) {
            printf("*");
            if (j < i)
                printf("       ");  // 7 spaces between stars
        }

        printf("\n");
    }

    return 0;
}