/*Write a C program to
1. Read n as the dimension of n*n 2D array(matrix)
2. Perform the following on the matrix:
i. Accept the n *n matrix
ii. Compute ad print the sum of all elements in thr 0th row
iii. Compute and print the multiplication of all elements in 1st column
iv. Compute and print the sum of all elements in the anti-diagonal
v. Compute and print the sum of all elements in the matrix*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the dimension (n) of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int i, j;

    // (i) Accept the n*n matrix
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // (ii) Sum of all elements in the 0th row
    int sum_row0 = 0;
    for(j = 0; j < n; j++) {
        sum_row0 += matrix[0][j];
    }
    printf("Sum of all elements in 0th row = %d\n", sum_row0);

    // (iii) Multiplication of all elements in 1st column
    int mul_col1 = 1;
    for(i = 0; i < n; i++) {
        mul_col1 *= matrix[i][0];
    }
    printf("Multiplication of all elements in 1st column = %d\n", mul_col1);

    // (iv) Sum of all elements in the anti-diagonal
    // Anti-diagonal elements are where i + j == n - 1
    int sum_antidiag = 0;
    for(i = 0; i < n; i++) {
        sum_antidiag += matrix[i][n - 1 - i];
    }
    printf("Sum of all elements in the anti-diagonal = %d\n", sum_antidiag);

    // (v) Sum of all elements in the matrix
    int sum_matrix = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sum_matrix += matrix[i][j];
        }
    }
    printf("Sum of all elements in the matrix = %d\n", sum_matrix);

    return 0;
}