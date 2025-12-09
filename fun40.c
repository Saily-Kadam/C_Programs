#include <stdio.h>

int gcd(int a, int b);

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("GCD of %d and %d = %d\n", x, y, gcd(x, y));

    return 0;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}