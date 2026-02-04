#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp = num;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    // Calculate Armstrong sum
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}