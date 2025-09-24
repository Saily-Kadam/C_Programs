//Take n integers as input from the user. After each entry, print the current maximum value seen so far. 
//Perform the maximum value  seen so far. Perform the entire process using a single loop.
#include <stdio.h>

int main() {
    int n, num, max;

    printf("Enter the number of integers: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (i == 0) {
            max = num;
        } else {
            max = (num > max) ? num : max;
        }
        printf("Maximum so far: %d\n", max);
    }

    return 0;
}