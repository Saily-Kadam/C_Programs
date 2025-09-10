//Skip printing odd numbers in a loop using continue. 
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d:\n", n);
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            continue;  
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}