#include <stdio.h>

void pascalTriangle(int n);
int factorial(int n);

int main() {
    int n = 5;
    pascalTriangle(n);
    return 0;
}

void pascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i; s++)
            printf(" ");

        for (int j = 0; j <= i; j++) {
            int val = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ", val);
        }
        printf("\n");
    }
}

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}