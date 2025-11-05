//Write a program to nd the transpose of a given matrix.
#include <stdio.h>   // Include standard input/output library

int main() {
    int rows, cols;   // Variables to store number of rows and columns

    // Ask user for dimensions of the matrix
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[10][10], transpose[10][10];  // Declare matrices (max 10x10 for simplicity)

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {         // Loop through rows
        for (int j = 0; j < cols; j++) {     // Loop through columns
            scanf("%d", &matrix[i][j]);      // Read each element
        }
    }

    // Compute transpose of the matrix
    // Transpose[i][j] = Matrix[j][i]
    for (int i = 0; i < rows; i++) {         // Loop through rows of original
        for (int j = 0; j < cols; j++) {     // Loop through columns of original
            transpose[j][i] = matrix[i][j];  // Swap rows with columns
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);     // Print each element
        }
        printf("\n");                        // Move to next line after each row
    }

    // Display the transpose matrix
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < cols; i++) {         // Now rows become columns
        for (int j = 0; j < rows; j++) {     // and columns become rows
            printf("%d ", transpose[i][j]);  // Print each transposed element
        }
        printf("\n");
    }

    return 0;  // End of program
}