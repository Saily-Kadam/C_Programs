//table of 8
#include <stdio.h>

int main() {
    int i;

    printf("Multiplication Table of 8:\n");

    for(i = 1; i <= 10; i++) {
        printf("8 x %2d = %3d\n", i, 8 * i);
    }

    return 0;
}