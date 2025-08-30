//Print the multiplication table for a given number 
#include <stdio.h>

int main() {
    int num, i;

    // Input the number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print the multiplication table from 1 to 10
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}