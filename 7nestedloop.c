//Print various formatted patterns (pyramid, diamond, Pascal’s triangle) using nested loops. 
#include <stdio.h>

void printPyramid(int rows) {
    int i, j;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printDiamond(int rows) {
    int i, j;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for(i = rows - 1; i >= 1; i--) {
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}


void printPascalsTriangle(int rows) {
    int coef = 1, space, i, j;
    for(i = 0; i < rows; i++) {
        for(space = 1; space <= rows - i; space++) {
            printf("  "); 
        }
        for(j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%4d", coef);
        }
        printf("\n");
    }
}

int main() {
    int choice, rows;

    printf("Choose a pattern to print:\n");
    printf("1. Pyramid Pattern\n");
    printf("2. Diamond Pattern\n");
    printf("3. Pascal's Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    switch(choice) {
        case 1:
            printf("\nPyramid Pattern:\n");
            printPyramid(rows);
            break;
        case 2:
            printf("\nDiamond Pattern:\n");
            printDiamond(rows);
            break;
        case 3:
            printf("\nPascal's Triangle:\n");
            printPascalsTriangle(rows);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}