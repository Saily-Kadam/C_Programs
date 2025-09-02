//Check whether a given number is prime or composite  
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // Assume the number is prime

    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

   
    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  
            break;
        }
    }

    
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is a composite number.\n", num);

    return 0;
}