/*Write a C program that:
1. Reads n integers into a dynamically allocated array.
2. Uses a for loop with if--else if--else conditions to count how many numbers are:
• Positive
• Negative
• Zero
3. Uses nested loops to print all pairs of elements in the array where the sum of the pair is positive.
Example Input:
5
3 -1 0 4 -2
Example Output:
Positive count: 2
Negative count: 2
Zero count: 1
Pairs with positive sum:
(3, -1)
(3, 0)
(3, 4)
(3, -2)
(-1, 4)
(0, 4)
(4, -2)*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Counters for positive, negative, zero
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    // Count positive, negative, and zero using for loop with if-else
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Print counts
    printf("Positive count: %d\n", positiveCount);
    printf("Negative count: %d\n", negativeCount);
    printf("Zero count: %d\n", zeroCount);

    // Nested loops to print pairs with positive sum
    printf("Pairs with positive sum:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[i] + arr[j]) > 0) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    free(arr);
    return 0;
}