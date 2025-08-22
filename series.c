//Calculate and print the sum of the series 1 + 1/2 + 1/3 + ... + 1/n

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

 
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

   
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    
    printf("Sum of the series 1 + 1/2 + ... + 1/%d = %.6f\n", n, sum);

    return 0;
}
