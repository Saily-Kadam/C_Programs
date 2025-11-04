//Given an array containing numbers from 1 to n with one number missing. (Hint: Use
//the formula n*(n+1)/2 or sum comparison).
#include <stdio.h>

int main() {
    int n, i, j, duplicate;
    int expected_sum = 0, actual_sum = 0;

    // Ask user for the value of n
    printf("Enter the value of n (the maximum number in the range): ");
    scanf("%d", &n);

    int arr[n - 1];  // Array has n-1 elements

    printf("Enter %d numbers from 1 to %d (no duplicates):\n", n - 1, n);

    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);

        // Check for duplicates
        duplicate = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate number detected! Please re-enter a unique number: ");
                scanf("%d", &arr[i]);
                // restart checking
            }
        }

        // Validate the range (1 to n)
        if (arr[i] < 1 || arr[i] > n) {
            printf("Invalid number! Please enter a number between 1 and %d: ", n);
            scanf("%d", &arr[i]);
            i--; // redo this iteration
            continue;
        }

        actual_sum += arr[i];  // Add to sum
    }

    // Expected sum using formula n*(n+1)/2
    expected_sum = n * (n + 1) / 2;

    // Missing number = expected sum - actual sum
    int missing = expected_sum - actual_sum;

    printf("\nThe missing number is: %d\n", missing);

    return 0;
}