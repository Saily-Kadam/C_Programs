//Write a program to rotate the array elements to the right by k positions.
//Example: [1,2,3,4,5] → [5,1,2,3,4] for k=1.
#include <stdio.h>

int main() {
    int n, k, i;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input k (number of rotations)
    printf("Enter k: ");
    scanf("%d", &k);

    // Handle cases where k >= n
    k = k % n;

    // Rotate array to the right by k
    for(i = 0; i < k; i++) {
        int last = arr[n - 1]; // store last element
        for(int j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];
        arr[0] = last; // put last element at front
    }

    // Print rotated array
    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}