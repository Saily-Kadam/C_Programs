#include <stdio.h>

long long power(int base, int exp);

int main() {
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("%d^%d = %lld\n", base, exp, power(base, exp));

    return 0;
}

long long power(int base, int exp) {
    long long result = 1;

    for(int i = 1; i <= exp; i++)
        result *= base;

    return result;
}