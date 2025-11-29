#include <stdio.h>

int main() {
    int rows = 4;
    int width = 12;   // width of each star block

    for (int i = 1; i <= rows; i++) {

        // Leading blanks
        for (int s = 1; s <= rows - i; s++)
            printf("%*s", width, "");

        // Star blocks
        for (int j = 1; j <= i; j++)
            printf("%-*s", width, "*");

        printf("\n");
    }

    return 0;
}