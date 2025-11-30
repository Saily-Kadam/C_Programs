#include <stdio.h>
#include <string.h>

int main() {
    int rows = 4;
    int gap = 7;

    for (int i = 1; i <= rows; i++) {
        char line[200] = "";
        int k = 0;

        // leading spaces
        for (int s = 0; s < (rows - i) * (gap + 1); s++)
            line[k++] = ' ';

        // stars with gap
        for (int j = 1; j <= i; j++) {
            line[k++] = '*';
            if (j < i) {
                for (int s = 0; s < gap; s++)
                    line[k++] = ' ';
            }
        }

        line[k] = '\0';  // terminate string
        printf("%s\n", line);
    }

    return 0;
}