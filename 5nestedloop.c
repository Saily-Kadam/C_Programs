//Write a program to determine whether two given numbers are amicable numbers 
//a. Two numbers are said to be amicable if the sum of proper divisors (excluding the 
//number itself) of each number equals the other number - (220/284) 
#include <stdio.h>

// Function to calculate the sum of proper divisors of a number
int sum_of_divisors(int n) {
    int sum = 1; // 1 is always a divisor
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum1 = sum_of_divisors(num1);
    int sum2 = sum_of_divisors(num2);
    
    if (sum1 == num2 && sum2 == num1) {
        printf("%d and %d are amicable numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not amicable numbers.\n", num1, num2);
    }
    
    return 0;
}