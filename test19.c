/*for a given n, print a square pattern where - odd rows contain the hash symbol #. 
-Even rows contain the star symbol * use nested while loops to generate the pattern*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square (n): ");
    scanf("%d", &n);

    int row = 1;
    while (row <= n) {
        int col = 1;
        char symbol;
        if (row % 2 == 1) {
            symbol = '#';  
        } else {
            symbol = '*'; 
        }

        while (col <= n) {
            printf("%c", symbol);
            col++;
        }

        printf("\n");
        row++;
    }

    return 0;
}