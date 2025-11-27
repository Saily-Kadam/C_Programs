/*Hollow Square:
*****
*   *
*   *
*   *
*****

Hollow Triangle:
*
**
* *
*  *
*****
*/
#include <stdio.h>

void hollowSquare(int n);
void hollowTriangle(int n);

int main() {
    int n = 5;

    printf("Hollow Square:\n");
    hollowSquare(n);

    printf("\nHollow Triangle:\n");
    hollowTriangle(n);

    return 0;
}

void hollowSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void hollowTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}