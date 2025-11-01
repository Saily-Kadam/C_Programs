//Write a program to find the second largest and second smallest element in an array.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if(n < 2) { // Need at least 2 elements
        printf("Array should have at least 2 elements.\n");
        return 0;
    }

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
     printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest, secondLargest, smallest, secondSmallest;

    // Initialize largest and smallest using first two elements
    if(arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
        smallest = arr[1];
        secondSmallest = arr[0];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
        smallest = arr[0];
        secondSmallest = arr[1];
    }

    // Loop through remaining elements
    for(i = 2; i < n; i++) {
        // Update largest and second largest
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        // Update smallest and second smallest
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Second largest element: %d\n", secondLargest);
    printf("Second smallest element: %d\n", secondSmallest);

    free(arr); // Free dynamically allocated memory
    return 0;
}