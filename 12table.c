//table of 12
#include <stdio.h>

int main() {
    int i;

    printf("Multiplication Table of 12:\n");

    for(i = 1; i <= 10; i++) {
        printf("12 x %2d = %3d\n", i, 12 * i);
    }

    return 0;
}