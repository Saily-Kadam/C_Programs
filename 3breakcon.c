//Find the smallest divisor of a number greater than 1 using break.
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number greater than 1: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Number must be greater than 1.\n");
        return 1;
    }

    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            printf("Smallest divisor of %d (other than 1) is: %d\n", num, i);
            break;
        }
    }

    return 0;
}