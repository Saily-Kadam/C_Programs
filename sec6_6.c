//Write a program to multiply two matrix.
#include <stdio.h>   // Include standard input/output library

int main() {
    int aRows, aCols, bRows, bCols;

    // Ask user for dimensions of both matrices
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &aRows, &aCols);

    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &bRows, &bCols);

    // Check if multiplication is possible
    // Columns of first matrix must be equal to rows of second
    if (aCols != bRows) {
        printf("Matrix multiplication not possible! (Columns of A must equal Rows of B)\n");
        return 0;  // Exit program
    }

    int A[10][10], B[10][10], C[10][10];  // Declare matrices (max 10x10 for simplicity)

    // Input elements of first matrix
    printf("\nEnter elements of first matrix (A):\n");
    for (int i = 0; i < aRows; i++) {
        for (int j = 0; j < aCols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of second matrix
    printf("\nEnter elements of second matrix (B):\n");
    for (int i = 0; i < bRows; i++) {
        for (int j = 0; j < bCols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C to zero
    for (int i = 0; i < aRows; i++) {
        for (int j = 0; j < bCols; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    // Each element of C = sum of (A row * B column)
    for (int i = 0; i < aRows; i++) {          // Loop through rows of A
        for (int j = 0; j < bCols; j++) {      // Loop through columns of B
            for (int k = 0; k < aCols; k++) {  // Common dimension loop
                C[i][j] += A[i][k] * B[k][j];  // Multiply and accumulate
            }
        }
    }

    // Display the result matrix
    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < aRows; i++) {
        for (int j = 0; j < bCols; j++) {
            printf("%d ", C[i][j]);  // Print each element of result
        }
        printf("\n");  // New line after each row
    }

    return 0;  // End of program
}