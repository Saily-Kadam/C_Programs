/*
*
*	*
*	*	*
*	*	*	*
*	*	*	*	*
*/
#include <stdio.h>

void ascendingPattern() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*\t");
        }
        printf("\n");
    }
}

int main() {
    ascendingPattern();
    return 0;
}