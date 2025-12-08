#include <stdio.h>

long long power(int x, int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, n;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    printf("%d^%d = %lld\n", x, n, power(x, n));
    return 0;
}