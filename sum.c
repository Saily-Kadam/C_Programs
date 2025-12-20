#include <stdio.h>

int sumOfDigits(int num);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sumOfDigits(num));

    return 0;
}

int sumOfDigits(int num) {
    int sum = 0;

    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}
