#include <stdio.h>

void hollowDiamond(int n);

int main() {
    int n = 4;  // height of upper half

    hollowDiamond(n);

    return 0;
}

void hollowDiamond(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");

        for (int j = 1; j <= 2*i - 1; j++) {
            if (j == 1 || j == 2*i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");

        for (int j = 1; j <= 2*i - 1; j++) {
            if (j == 1 || j == 2*i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}