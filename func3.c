//2 table using function
#include <stdio.h>

// Function to print table of 2
void tableOf2() {
    for(int i = 1; i <= 10; i++) {
        printf("2 x %d = %d\n", i, 2 * i);
    }
}

int main() {
    printf("Table of 2:\n");
    tableOf2();
    return 0;
}