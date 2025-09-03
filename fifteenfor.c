//Print a square/triangle/star pattern based on user input (height) 
#include <stdio.h>

int main() {
    int i, j, height;

    // Ask user for the height
    printf("Enter height of the pattern: ");
    scanf("%d", &height);

    printf("\nSquare Pattern:\n");
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nLeft-aligned Triangle Pattern:\n");
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nStar Pyramid Pattern:\n");
    for (i = 1; i <= height; i++) {
        // Print spaces
        for (j = 1; j <= height - i; j++) {
            printf("  ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}