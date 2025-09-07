//Print multiplication tables from 2 to 11 using nested for loops.
#include <stdio.h>

int main() {
    int i, j;

    for (i = 2; i <= 11; i++) {
        printf("Multiplication Table for %d:\n", i);
       
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    return 0;
}