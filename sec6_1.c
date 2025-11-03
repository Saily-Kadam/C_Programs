// Display all elements that occur more than once in an array.
#include <stdio.h>

int main() {
    int n, i, j;
    
    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");
    
    // Check each element for duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;  // Stop after finding one duplicate of arr[i]
            }
        }
    }

    return 0;
}