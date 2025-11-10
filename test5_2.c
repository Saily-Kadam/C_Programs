/*Write a c program to
1. Read n integers into a dynamically allocated array.
2. Perform the following on the array:
i. Replace each even number with 0 and add number with 1.
ii. Sort the modified array in non decreasing order.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, temp;
    int *arr;

    // Step 1: Read number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 2: Read elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Replace each even number with 0 and odd number with 1
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            arr[i] = 0;
        else
            arr[i] = 1;
    }

    // Step 4: Sort the modified array in non-decreasing order (simple bubble sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 5: Print the modified and sorted array
    printf("\nModified and sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}