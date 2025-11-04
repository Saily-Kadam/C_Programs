//Write a program to nd all leaders in an array. An element is called a leader if it is
//greater than all elements to its right.
//Example: [16,17,4,3,5,2] → Leaders are 17, 5, 2.
#include <stdio.h>

int main() {
    int n, i, j;

    // Ask user for array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Leaders in the array are: ");

    // Outer loop to check each element
    for (i = 0; i < n; i++) {
        int isLeader = 1; // assume arr[i] is a leader

        // Check all elements to the right of arr[i]
        for (j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = 0; // not a leader
                break;
            }
        }

        // If still leader, print it
        if (isLeader) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}