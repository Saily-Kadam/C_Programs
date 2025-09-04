// Find the GCD (HCF) and LCM of two numbers 
#include <stdio.h>

int main() {
    int num1, num2, i, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for(i = 1; i <= num1 && i <= num2; i++) {
        
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    lcm = (num1 * num2) / gcd;

    printf("GCD (HCF) of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}