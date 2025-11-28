/*Number Triangle:
1 
1 2 
1 2 3 
1 2 3 4 

Inverted Number Triangle:
1 2 3 4 
1 2 3 
1 2
1*/
#include <stdio.h>

void numberTriangle(int n);
void numberTriangleInverted(int n);

int main() {
    int n = 4;

    printf("Number Triangle:\n");
    numberTriangle(n);

    printf("\nInverted Number Triangle:\n");
    numberTriangleInverted(n);

    return 0;
}

void numberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}

void numberTriangleInverted(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}