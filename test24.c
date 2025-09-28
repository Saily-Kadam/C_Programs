/*continuously take integer inputs from the user enters -1. After each input,
 print the rolling sum (the cumulative total so far). if at any point the rolling sum becomes divisible by 13, 
reset the sum to 0. */
#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    while (1) {
        printf("Enter an integer (-1 to quit): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        sum += num;
        printf("Rolling Sum: %d\n", sum);

        if (sum % 13 == 0) {
            printf("Sum is divisible by 13. Resetting sum to 0.\n");
            sum = 0;
        }
    }

    printf("Program ended.\n");
    return 0;
}