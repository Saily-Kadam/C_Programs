/*Given an integer n, find the first primr number p>= such that the integer obtained by reversing the digits
of p is also prime. for example 13 and 31 (both prime). Hint: Use nested loops one for checking a number one, 
another for checking primality.*/
#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int reverse_number(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int n;
    printf("Enter an integer n: ");
    scanf("%d", &n);

    while (1) {
        if (is_prime(n)) {
            int reversed = reverse_number(n);
            if (is_prime(reversed)) {
                printf("The first prime >= %d whose reverse is also prime is: %d\n", n, n);
                break;
            }
        }
        n++;
    }

    return 0;
}