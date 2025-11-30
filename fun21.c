#include <stdio.h>

int main() {
    int rows = 4, gap = 7;
    int totalLines = rows;
    int i = 1;

    while (i <= totalLines) {
        int totalChars = (rows - i) * (gap + 1) + (i - 1) * gap + i;
        int starPos = (rows - i) * (gap + 1);

        for (int pos = 0; pos < totalChars; pos++) {
            if (pos == starPos) {
                putchar('*');
                starPos += (gap + 1);
            } else {
                putchar(' ');
            }
        }

        putchar('\n');
        i++;
    }

    return 0;
}