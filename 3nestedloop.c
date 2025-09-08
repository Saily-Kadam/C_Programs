//Generate and print the prime-factored form of numbers 1 to n.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int num = 1; num <= n; num++) {
        printf("%d = ", num);

        int temp = num;
        int first = 1; 

        for (int i = 2; i <= temp; i++) {
            while (temp % i == 0) {
                if (!first) {
                    printf(" * ");
                }
                printf("%d", i);
                temp /= i;
                first = 0;
            }
        }

        if (num == 1)
            printf("1");

        printf("\n");
    }

    return 0;
}