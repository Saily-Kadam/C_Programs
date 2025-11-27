    /* 
     *
    ***
   *****
  *******
 *********

Inverted Pyramid Pattern:
*********
 *******
  *****
   ***
    *
    */
#include <stdio.h>

void pyramid(int n);
void invertedPyramid(int n);

int main() {
    int n = 5;

    printf("Pyramid Pattern:\n");
    pyramid(n);

    printf("\nInverted Pyramid Pattern:\n");
    invertedPyramid(n);

    return 0;
}

void pyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
}

void invertedPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
}