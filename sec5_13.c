//Write a program to nd the sum of all elements in a 2D array.
#include <stdio.h>   // Include standard input/output library

int main() {
    int rows, cols;  // Variables to store number of rows and columns
    int i, j;        // Loop variables

    // Ask user for size of the 2D array
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];  // Declare 2D array with user-defined size
    int sum = 0;          // Variable to store the sum of all elements

    // Input elements into the 2D array
    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {             // Loop through each row
        for(j = 0; j < cols; j++) {         // Loop through each column
            scanf("%d", &arr[i][j]);        // Read each element
            sum += arr[i][j];               // Add element to sum
        }
    }

    // Display the total sum
    printf("Sum of all elements = %d\n", sum);

    return 0;   // End of program
}