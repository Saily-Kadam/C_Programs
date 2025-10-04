//matrix substraction
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int rows, cols;
    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix (A):\n");
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix (B):\n");
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = a[i][j] - b[i][j];
    printf("Result of matrix subtraction (A - B):\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}