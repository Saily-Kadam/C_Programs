//Write a program to print Pascals triangle using nested loops.
#include <stdio.h>   // Include standard input/output library

int main() {
    int rows, i, j, num;

    // Ask user for the number of rows
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Loop through each row
    for (i = 0; i < rows; i++) {

        // Print spaces to center the triangle
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // First number in each row is always 1
        num = 1;

        // Loop through elements of current row
        for (j = 0; j <= i; j++) {
            printf("%d ", num);  // Print the current number

            // Calculate next number using formula:
            // num = num * (i - j) / (j + 1)
            num = num * (i - j) / (j + 1);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;  // End of program
}