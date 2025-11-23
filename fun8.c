//largest of three numbers
#include <stdio.h>

// Function declaration
int largest(int a, int b, int c);

int main() {
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Largest = %d\n", largest(x, y, z));

    return 0;
}

// Function definition
int largest(int a, int b, int c) {
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;

    return max;
}