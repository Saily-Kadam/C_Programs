//Check and print all Armstrong numbers in a range using nested loops. 
#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    printf("Enter the start of range: ");
    scanf("%d", &start);
    printf("Enter the end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        int sum = 0, temp = num, digits = 0;

        int t = temp;
        while (t > 0) {
            digits++;
            t /= 10;
        }
        t = temp;
        while (t > 0) {
            int digit = t % 10;
            
            int power = 1;
            for (int i = 0; i < digits; i++) {
                power *= digit;
            }

            sum += power;
            t /= 10;
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}