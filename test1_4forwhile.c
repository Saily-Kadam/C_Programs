/*Write a program that
- Asks the user for the number of rows (n) and columns (m)
-Printd a table of numbers from 1 to n by m along their squares
-Uses an outher while loop to control the rows and an inner for loop to control the columns */
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
        for (int col = 0; col < m; col++) {
            printf("%4d (%4d)  ", num, num * num);
            num++;
        }
        printf("\n");
        row++;
    }

    return 0;
}