// Dynamically allocate and read an array of size n. Find the difference between the sum
//of even-indexed and odd-indexed elements.
#include <stdio.h>   // Standard I/O library
#include <stdlib.h>  // For malloc and free functions

int main() {
    int n;
    printf("Enter size of array: ");  // Prompt user for array size
    scanf("%d", &n);                  // Read size of array

    int *arr = (int *)malloc(n * sizeof(int));  // Dynamically allocate array of size n

    printf("Enter %d elements: ", n);  // Prompt user to enter array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);          // Read each element into the array

    int sumEven = 0, sumOdd = 0;       // Initialize sums for even-indexed and odd-indexed elements

    for (int i = 0; i < n; i++) {     // Loop through each element
        if (i % 2 == 0)                // If index is even
            sumEven += arr[i];         // Add to even-indexed sum
        else                            // If index is odd
            sumOdd += arr[i];          // Add to odd-indexed sum
    }

    int difference = sumEven - sumOdd; // Calculate difference between sums
    printf("Difference between sum of even-indexed and odd-indexed elements: %d\n", difference); // Print result

    free(arr);                          // Free dynamically allocated memory
    return 0;                           // End of program
}
