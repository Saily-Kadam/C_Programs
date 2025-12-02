#include <stdio.h>

void butterfly(int n);

int main() {
    int n = 4;   // half height
    butterfly(n);
    return 0;
}

void butterfly(int n) {
    // Upper Half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");

        for (int s = 1; s <= 2*(n-i); s++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower Half
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("*");

        for (int s = 1; s <= 2*(n-i); s++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }
}