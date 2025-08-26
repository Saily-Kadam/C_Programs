// Print a square/triangle/star pattern based on user input (height) 
#include <stdio.h>

void printSquare(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printPyramid(int height) {
    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int choice, height;

    printf("Enter the height of the pattern: ");
    scanf("%d", &height);

    printf("Choose pattern to print:\n");
    printf("1. Square\n");
    printf("2. Right-angled Triangle\n");
    printf("3. Pyramid (Star)\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    printf("\n");

    switch (choice) {
        case 1:
            printSquare(height);
            break;
        case 2:
            printTriangle(height);
            break;
        case 3:
            printPyramid(height);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}