/*Write a C program to:
1. Reads n as the dimension of a n* n 2D array (matrix)
2. Perform the following on the mtrix:
i. Print the largest element in the matrix
ii. Print the smallest element in the mtrix
iii. Print the largest element on the diagonal*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the dimension (n) of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int i, j;

    // Accept n x n matrix elements
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize largest and smallest with the first element
    int largest = matrix[0][0];
    int smallest = matrix[0][0];

    // Find largest and smallest in the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] > largest)
                largest = matrix[i][j];
            if (matrix[i][j] < smallest)
                smallest = matrix[i][j];
        }
    }

    // Find the largest element on the main diagonal
    int largest_diag = matrix[0][0];
    for (i = 0; i < n; i++) {
        if (matrix[i][i] > largest_diag)
            largest_diag = matrix[i][i];
    }

    // Print results
    printf("Largest element in the matrix = %d\n", largest);
    printf("Smallest element in the matrix = %d\n", smallest);
    printf("Largest element on the main diagonal = %d\n", largest_diag);

    return 0;
}