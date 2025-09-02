// Find the power x raise to y  without using pow()
#include <stdio.h>

int main() {
    int x, y, i;
    long long result = 1;  
   
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    
    if (y < 0) {
        printf("This program does not handle negative exponents.\n");
        return 0;
    }

    
    for (i = 1; i <= y; i++) {
        result *= x;
    }

   
    printf("%d raised to the power %d is %lld\n", x, y, result);

    return 0;
}