//take n integers as input from the user. After each entry, print the current maximum value seen so far. 
//Perform the entire process using a single loop.
#include <stdio.h>

int main() {
    int n, num, max;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of integers.\n");
        return 1; 
    }

    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (i == 0) {
            max = num;
        } else {
            max = (num > max) ? num : max; 
        }

        printf("Current max: %d\n", max);
    }

    return 0;
}