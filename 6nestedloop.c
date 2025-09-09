//Write a program to check whether a given number is a perfect number 
//a. A perfect number is a positive integer that is equal to the sum of its proper divisors 
//(excluding itself) e.g : 28: 1, 2, 4, 7, 14 → sum = 28 
#include <stdio.h>

// Function to calculate sum of proper divisors
int sum_of_divisors(int n) {
    int sum = 1; // 1 is always a divisor for n > 1
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    int sum = sum_of_divisors(num);
    
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}