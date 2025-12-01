#include <stdio.h>

void floydTriangle(int n);
void reverseFloydTriangle(int n);

int main() {
    int n = 4;

    printf("Floyd's Triangle:\n");
    floydTriangle(n);

    printf("\nReverse Floyd's Triangle:\n");
    reverseFloydTriangle(n);

    return 0;
}

void floydTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

void reverseFloydTriangle(int n) {
    int total = n * (n + 1) / 2;  // total numbers

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", total--);
        }
        printf("\n");
    }
}