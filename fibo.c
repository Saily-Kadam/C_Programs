//Print the first n terms of the Fibonacci series using a for loop.
#include <stdio.h>

int main() {
    int terms, first = 0, second = 1, fibonacci, count;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for(count = 1; count <= terms; count++) {
        printf("%d ", first);
        fibonacci = first + second;
        first = second;
        second = fibonacci;
    }

    return 0;
}