//3 table
#include <stdio.h>

// Function to print table of 3
void tableOf3() {
    for(int i = 1; i <= 10; i++) {
        printf("3 x %d = %d\n", i, 3 * i);
    }
}

int main() {
    printf("Table of 3:\n");
    tableOf3();
    return 0;
}