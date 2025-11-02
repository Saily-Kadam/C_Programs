//Write a program to nd the largest and smallest elements in a 2D array.
#include <stdio.h>   // Include standard input/output library

int main() {
    int rows, cols;  // Variables for number of rows and columns
    int i, j;        // Loop variables

    // Ask user for size of the 2D array
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];  // Declare 2D array with given size

    // Input elements into the array
    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);  // Read each element
        }
    }

    int largest = arr[0][0];   // Assume first element is largest
    int smallest = arr[0][0];  // Assume first element is smallest

    // Traverse the array to find largest and smallest
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] > largest) {        // If current element is bigger
                largest = arr[i][j];         // Update largest
            }
            if(arr[i][j] < smallest) {       // If current element is smaller
                smallest = arr[i][j];        // Update smallest
            }
        }
    }

    // Display results
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;  // End of program
}