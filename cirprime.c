#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i;
    if (n <= 1) return 0;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int rotate(int n, int digits) {
    int last = n % 10;
    return (last * pow(10, digits - 1)) + (n / 10);
}

int main() {
    int n, temp, digits = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    for (i = 0; i < digits; i++) {
        if (!isPrime(temp)) {
            printf("Not a Circular Prime\n");
            return 0;
        }
        temp = rotate(temp, digits);
    }

    printf("Circular Prime\n");
    return 0;
}