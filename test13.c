/* print an n*n checkerboard where
use an outer while loop for rows.
use an inner for loop for coumns
if the sum of the rows and columns index is even, print the current number
if the sum is odd, print- instead*/
#include <stdio.h>
void run() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;
    int num = 1;

    while (i <= n) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                printf("%d ", num);
                num++;
            } else {
                printf("- ");
            }
        }
        printf("\n");
        i++;
    }
}

int main() {
    run();
    return 0;
}