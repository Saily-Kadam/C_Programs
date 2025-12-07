#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore Swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swap:  x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}