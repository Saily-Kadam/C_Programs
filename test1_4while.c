/*Write a program that
- Asks the user for the number of rows (n) and columns (m)
-Printd a table of numbers from 1 to n by m along their squares
-Both using while loop */
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows (n): ");
    scanf("%d", &n);
    printf("Enter number of columns (m): ");
    scanf("%d", &m);

    int num = 1;
    int row = 0;

    while (row < n) {
        int col = 0;
        while (col < m) {
            printf("%4d (%4d)  ", num, num * num);
            num++;
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}