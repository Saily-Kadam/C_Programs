// table of 11
#include <stdio.h>

int main() {
    int i;

    printf("Multiplication Table of 11:\n");

    for(i = 1; i <= 10; i++) {
        printf("11 x %2d = %3d\n", i, 11* i);
    }

    return 0;
}