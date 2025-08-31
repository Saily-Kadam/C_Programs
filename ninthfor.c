//Count and display the number of digits in a number 
#include <stdio.h>

int main() {
    int num, count = 0;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle 0 explicitly, since logics below won't count it
    if (num == 0) {
        count = 1;
    } else {
        // Make the number positive (if it's negative)
        if (num < 0) {
            num = -num;
        }

        // Count digits using for loop
        for (; num != 0; num /= 10) {
            count++;
        }
    }

    // Output the result
    printf("Number of digits: %d\n", count);

    return 0;
}