//Calculate and print the sum of the series 1 + 1/2 + 1/3 + ... + 1/n using a for loop
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum+1.0 / i;
    }

    printf("Sum of the series = %f\n", sum);

    return 0;
}