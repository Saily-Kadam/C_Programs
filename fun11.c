/* *	*	*	*	*
*	*	*	*
*	*	*
*	*
*

*/
#include <stdio.h>

void descendingPattern() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*\t");
        }
        printf("\n");
    }
}

int main() {
    descendingPattern();
    return 0;
}