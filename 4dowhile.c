//Display digits of a number, one per line, using a do-while loop.
#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
    } else {
        printf("Digits (in reverse order):\n");
        do {
            digit = num % 10;
            printf("%d\n", digit);
            num = num / 10;
        } while (num != 0);
    }

    return 0;
}