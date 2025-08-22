//Sum of squares of first n numbers 
#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;  
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

   
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    
    for (i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }

    printf("Sum of squares of first %d natural numbers = %lld\n", n, sum);

    return 0;
}
